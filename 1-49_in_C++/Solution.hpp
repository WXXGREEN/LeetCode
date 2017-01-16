#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <string>
#include <sys/time.h>
#include <vector>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  bool isPalindrome(int x);
  int maxArea(vector<int> &height);
  string intToRoman(int num);
  string longestCommonPrefix(vector<string> &strs);
  ListNode *removeNthFromEnd(ListNode *head, int n);
  bool isValid(string s);
  ListNode *MergeTwoLists(ListNode *l1, ListNode *l2);
  ListNode *swapPairs(ListNode *head);
  int removeElement(vector<int> &nums, int val);
  int strStr(string haystack, string needle);
  vector<string> generateParenthesis(int n);
  int divide(int dividend, int divisor);
  bool isValidSudoku(vector<vector<char>> &board);
  int minDepth(TreeNode *root);
  int countPrimes(int n);
  string countAndSay(int n);
  void nextPermutation(vector<int> &nums);
  vector<int> searchRange(vector<int>& nums, int target);
  int searchInsert(vector<int>& nums, int target);
  vector<vector<int>> combinationSum(vector<int>& candidates, int target);
  vector<vector<int>> combinationSum2(vector<int>& candidates, int target);
  vector<vector<int>> permute(vector<int>& nums);
  vector<vector<int>> permuteUnique(vector<int>& nums);
  void rotate(vector<vector<int>>& matrix);
  vector<vector<string>> groupAnagrams(vector<string>& strs);
};
