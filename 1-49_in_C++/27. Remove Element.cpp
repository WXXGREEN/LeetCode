#include "Solution.hpp"

/*iven an array and a value, remove all instances of that value in place and
return the new length.
Do not allocate extra space for another array, you must do this in place with
constant memory.
The order of elements can be changed. It doesn't matter what you leave beyond
the new length.
Example:
Given input array nums = [3,2,2,3], val = 3*/

int Solution::removeElement(vector<int> &nums, int val) {
  int i = 0;
  for (int j = 0; j < nums.size(); j++)
    if (nums[j] != val) {
      nums[i] = nums[j];
      i++;
    }
  return i;
}
