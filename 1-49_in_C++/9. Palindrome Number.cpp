#include "Solution.hpp"

/*Determine whether an integer is a palindrome. Do this without extra space.
Some hints:
Could negative integers be palindromes? (ie, -1)
If you are thinking of converting the integer to string, note the restriction of
using extra space.
You could also try reversing an integer. However, if you have solved the problem
"Reverse Integer", you know that the reversed integer might overflow. How would
you handle such case?
There is a more generic way of solving this problem.
*/
bool Solution::isPalindrome(int x) {
  if (x < 0)
    return false;

  int cnt = 0;
  int tmp = x;
  int tmp2 = x;
  while (tmp / 10 != 0) {
    cnt++;
    tmp /= 10;
  }

  for (int i = 0; i < cnt / 2; i++) {
    x /= 10;
  }
  int leftHalf = x / 10;

  int rightReverse = 0;
  int tmp3 = 0;
  if ((cnt + 1) % 2 == 0)
    cnt += 1;
  for (int i = 0; i < cnt / 2; i++) {
    tmp3 = rightReverse * 10 + tmp2 % 10;
    rightReverse = tmp3;
    tmp2 /= 10;
  }
  // cout << leftHalf << endl;
  // cout << rightReverse << endl;
  if (rightReverse == leftHalf)
    return true;
  else
    return false;
}
