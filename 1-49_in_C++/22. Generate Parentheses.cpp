#include "Solution.hpp"

/**
* @param n n pairs
* @return All combinations of well-formed parentheses
*/

void recur(vector<string> &res, int left, int right, string s, int n) {
  if (right == n)
    res.push_back(s);
  else if (left == n) {
    recur(res, left, right + 1, s + ')', n);
  } else {
    if (left > right)
      recur(res, left, right + 1, s + ')', n);
    recur(res, left + 1, right, s + '(', n);
  }
}
vector<string> Solution::generateParenthesis(int n) {
  vector<string> res;
  string s;
  recur(res, 0, 0, s, n);
  return res;
}
