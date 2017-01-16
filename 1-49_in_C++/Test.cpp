#include "Solution.hpp"

int main() {
  // const int integer = -2147447412;
  Solution solution;
  int n[]={2,3,6,7};
  vector<int> v1(n,n+4),v2;
  vector<vector<int>> v;
  v=solution.combinationSum(v1,7);
  for(int i=0;i<v.size()-1;i++){
    v2=v[i];
    for(int j;j<v2.size()-1;j++){
      cout<<v2[j];
    }
    cout<<endl;
  }
  return 0;
}
