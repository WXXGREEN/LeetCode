#include "Solution.hpp"

/*Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place, do not allocate extra memory.*/

void Solution::nextPermutation(vector<int>& nums){
  int pos1,pos2;
  int i,k;
  for( i=nums.size()-2;i>=0;i--){
    if(nums[i]<nums[i+1]){
      pos1=i;
      break;
    }
  }
  if(i<0){
     reverse(nums.begin(),nums.end());
     return;
   }
  for( k=nums.size()-1;k>pos1;k--){
    if(nums[k]>nums[pos1]){
      pos2=k;
      break;
    }
  }
  swap(nums[pos1],nums[pos2]);
  reverse(nums.begin()+pos1+1,nums.end());
  return;

  // vector<int>::iterator  pos1,pos2;
  // stack<int> s;
  // vector<int>::iterator it;
  //
  // for(it=nums.end()-3;it!=nums.begin()&& *it>*(it+1);it--)
  //
  // if(it==nums.begin()){
  //   for(vector<int>::iterator it=nums.begin();it!=nums.end();it++){
  //     s.push(*it);
  //   }
  //   for(vector<int>::iterator it=nums.begin();it!=nums.end();it++){
  //     *it=s.top();
  //     s.pop();
  //   }
  // }
  // else{
  //   pos1=it;
  //   std::vector<int>::iterator it2;
  //   for(it2=nums.end()-2;it2!=pos1 && *it2<*pos1;it2--)
  //   pos2=it2;
  //
  //   int tmp;
  //   tmp=*pos1;
  //   *pos2=*pos1;
  //   *pos1=tmp;
  //
  //   for(vector<int>::iterator it=pos1+1;it!=nums.end();it++){
  //     s.push(*it);
  //   }
  //   for(vector<int>::iterator it=pos1+1;it!=nums.end();it++){
  //     *it=s.top();
  //     s.pop();
  //   }
  // }
}
