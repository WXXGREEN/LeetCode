#include "Solution.hpp"

string myhash(string s){
	char tmp;
	for(int i=0;i<s.size();i++){
		for(int j=i+1;j<s.size();j++){
			if(s[i]>s[j]){
				tmp=s[i];
				s[i]=s[j];
				s[j]=tmp;
			}
		}
	}
	return s;
}

static int cmp(pair<string,string> a,pair<string,string> b){
	return a.first<b.first;
}

vector<vector<string> > Solution::groupAnagrams(vector<string>& strs){
   vector<vector<string> > result;
   vector<string> current;
   vector<pair<string,string> > hashes;
   for(int i=0;i<strs.size();i++){
	   hashes.push_back(make_pair(myhash(strs[i]),strs[i]));
   }
   sort(hashes.begin(),hashes.end(),cmp);
   for(int j=0;j<hashes.size();j++){
	   current.push_back(hashes[j].second);
	   if(j==hashes.size()-1||hashes[j].first!=hashes[j+1].first){
		   sort(current.begin(),current.end());
		   result.push_back(current);
		   current.clear();
	   }
   }
   return result;
}
