#include "Solution.hpp"
/*Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0*/

int Solution::searchInsert(vector<int>& nums, int target){
  int low=0,high=nums.size()-1;
  int medium;
  int index;

  while(low<=high){
    medium=(low+high)/2;
    if(nums[medium]<target)
      low=medium+1;
    else if(nums[medium]>target)
      high=medium-1;
    else{
      index=medium;
      return index;
    }
  }
  if(low>high) index=low;
  else index=high;
  return index;
}
