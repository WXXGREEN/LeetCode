#include "Solution.hpp"

vector<vector<int>> Solution::permute(vector<int>& nums){
  vector<vector<int>> result;
  vector<int> temp;
  backTrack(result,temp,nums);
  return result;
}

void backTrack(vector<vector<int>>& result,vector<int>& temp,vector<int>& nums){
  if(temp.size()==nums.size()){
    vector<int> tmp(temp);
    result.push_back(tmp);
    return;
  }else{
    for(int i=0;i<nums.size();i++){
      if(find(temp.begin(),temp.end(),nums[i])==temp.end()) continue;
      temp.push_back(nums[i]);
      backTrack(result,temp,nums);
      temp.erase(temp.end()-1);
    }
  }
}
