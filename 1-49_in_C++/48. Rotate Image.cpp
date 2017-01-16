#include "Solution.hpp"

void rotate(vector<vector<int>>& matrix){
  int n=matrix.size();
        int first,last,offset;
        for(int layer=0;layer<n/2;layer++){
            first=layer;
            last=n-1-layer;
            for(int i=first;i<last;i++){
                offset=i-first;
                int top=matrix[first][i];
                matrix[first][i]=matrix[last-offset][first];
                matrix[last-offset][first]=matrix[last][last-offset];
                matrix[last][last-offset]=matrix[i][last];
                matrix[i][last]=top;
            }
        }
    }
}
