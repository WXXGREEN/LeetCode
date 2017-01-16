#include "Solution.hpp"

/*Implement strStr().
Returns the index of the first occurrence of needle in haystack, or -1 if needle
is not part of haystack.*/

/*use two pointers*/
int Solution::strStr(string haystack, string needle) {
  int lenh = haystack.length(), lenn = needle.length();
  if (lenn == 0)
    return 0;

  for (int i = 0; i <= lenh - lenn; i++) {
    for (int j = 0; j < lenn; j++)
      if (haystack[i + j] != needle[j])
        break;
    if (j == lenn)
      return i;
  }
  return -1;
}
