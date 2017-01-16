#include "Solution.hpp"

/*Given a sorted array of integers, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

For example,
Given [5, 7, 7, 8, 8, 10] and target value 8,
return [3, 4].*/

 vector<int>  Solution::searchRange(vector<int>& nums, int target){
   vector<int> res;
   int pos1,pos2;
   int low=0;
   int high=nums.size()-1;
   int medium=(low+high)/2;
   bool find=false;
   if(nums.size()==1&&nums[0]==target){
     res.push_back(0);
     res.push_back(0);
     return res;
   }
   while(low<=high){
     if(nums[medium]<target){
       low=medium+1;
     }
     else if(nums[medium]>target){
       high=medium-1;
     }
     else{
       pos1=medium;
       find=true;
       break;
     }
     medium=(low+high)/2;
   }
   if(!find){
     res.push_back(-1);
     res.push_back(-1);
     return res;
   }
   pos2=pos1;
   while(pos1>0&&nums[pos1-1]==target) pos1--;
   while(pos2<nums.size()-1&&nums[pos2+1]==target) pos2++;
   res.push_back(pos1);
   res.push_back(pos2);
   return res;
 }
