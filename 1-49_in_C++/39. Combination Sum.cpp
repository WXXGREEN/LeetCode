#include "Solution.hpp"
/*Given a set of candidate numbers (C) (without duplicates) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

The same repeated number may be chosen from C unlimited number of times.

Note:
All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
For example, given candidate set [2, 3, 6, 7] and target 7,
A solution set is:
[
  [7],
  [2, 2, 3]
]*/

vector<vector<int>> res;

void BackTrack(vector<int>& candidates,const int target,const int index,vector<int>& combinations){
  if(target==0){
    res.push_back(combinations);
    return;
  }
  for(int i=index;i<candidates.size()&&target>=candidates[i];i++){
    if(i==0||candidates[i]!=candidates[i-1]){
      combinations.push_back(candidates[i]);
      BackTrack(candidates,target-candidates[i],i,combinations);
      combinations.pop_back();
    }
  }
}

 vector<vector<int>> Solution::combinationSum(vector<int>& candidates, int target){
   vector<int> combinations;
   sort(candidates.begin(),candidates.end());
   BackTrack(candidates,target,0,combinations);
   return res;
 }
