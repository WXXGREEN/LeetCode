#include "Solution.hpp"
/*The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.
*/

string Solution::countAndSay(int n) {
      string res("1");
      string s;
      int count;

      while(--n){
        for(int i=0;i<res.size();i+=count){
           for(count=0;count+i<res.size();count++){
             if(res[i]!=res[i+count])
               break;
           }
           s+=to_string(count)+res[i];
         }
         res=s;
         s.clear();
      }
      return res;
}
