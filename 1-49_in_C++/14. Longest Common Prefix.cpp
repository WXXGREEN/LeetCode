#include "Solution.hpp"

/*Write a function to find the longest common prefix string amongst an array of
 * strings.*/

string Solution::longestCommonPrefix(vector<string> &strs) {
  if (strs.empty() || strs.size() == 0)
    return "";
  string prefix;
  // int num;
  // int maxNum = 0;
  // auto iter1 = strs.begin(), iter2 = strs.end() - 1;
  // while (iter1 != iter2) {
  //   num = 1;
  //   while (true) {
  //     // cout << iter1->substr(0, num) << "  " << iter2->substr(0, num) <<
  //     endl;
  //     if (iter1->substr(0, num) != iter2->substr(0, num)) {
  //       break;
  //     }
  //     num++;
  //     if (num > maxNum) {
  //       maxNum = num - 1;
  //       prefix = iter1->substr(0, maxNum);
  //     }
  //   }
  //   if (iter1->size() < iter2->size())
  //     iter1++;
  //   else
  //     iter2--;
  // }

  for (int i = 0; i < strs[0].size(); i++) {
    char c = strs[0][i];
    for (int j = 1; j < strs.size(); j++) {
      if (strs[j].size() == i || strs[j][i] != c) {
        return strs[0].substr(0, i);
      }
    }
  }
  return strs[0];
}
