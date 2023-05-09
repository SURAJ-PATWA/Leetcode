class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& A) {
        int N=A.size();
        int M=A[0].size();
      for(int i=0;i<N-1;i++){
    for(int j=0;j<M-1;j++){
        
          if(A[i][j]!=A[i+1][j+1]) {
              return false;
          } 
        }
    }
    return true;  
    }
};