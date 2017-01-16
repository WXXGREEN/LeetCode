#include "Solution.hpp"

void backTrack(vector<vector<int>>& result,vector<int>& temp,
               vector<int>& nums,bool visited[]){
  if(temp.size()==nums.size()){
    vector<int> tmp(temp);
    result.push_back(tmp);
    return;
  }else{
    for(int i=0;i<nums.size();i++){
      if(visited[i]==true||(i!=0&&nums[i]==nums[i-1]&&visited[i-1]==0)){
        continue;
      }
      visited[i]=true;
      temp.push_back(nums[i]);
      backTrack(result,temp,nums,visited);
      temp.erase(temp.end()-1);
      visited[i]=false;
    }
  }
}

vector<vector<int>> Solution::permuteUnique(vector<int>& nums){
  vector<vector<int>> result;
  vector<int> temp;
  bool *visited=new bool[nums.size()];
  memset(visited,0,sizeof(bool)*nums.size());
  sort(nums.begin(),nums.end());
  backTrack(result,temp,nums,visited);
  return result;
}
