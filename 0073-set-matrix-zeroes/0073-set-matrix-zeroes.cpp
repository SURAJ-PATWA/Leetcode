class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      //try to solve using map   t=>O(mXn) S=>O(m+n)  
        unordered_map<int,int>s1;
        unordered_map<int,int>s2;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    s1[i]=1;
                    s2[j]=1;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(s1[i]==1||s2[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};