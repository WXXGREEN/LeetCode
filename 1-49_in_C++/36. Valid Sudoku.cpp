#include "Solution.hpp"

/*Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules.
The Sudoku board could be partially filled, where empty cells are filled with
the character '.'.*/

bool Solution::isValidSudoku(vector<vector<char>> &board) {
  int columUsed[9][9] = {0}, rowUsed[9][9] = {0}, boxUsed[9][9] = {0};
  int i, j, k;
  for (i = 0; i < board.size(); i++) {
    for (j = 0; j < board[i].size(); j++)
      if (board[i][j] != '.') {
        int num = board[i][j] - '1';
        k = i / 3 * 3 + j / 3;
        if (columUsed[i][num] || rowUsed[j][num] || boxUsed[k][num])
          return false;
        columUsed[i][num] = rowUsed[j][num] = boxUsed[k][num] = 1;
      }
  }
  return true;
}
