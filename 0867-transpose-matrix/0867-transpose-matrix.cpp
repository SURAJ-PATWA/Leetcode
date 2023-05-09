class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
      int n=matrix.size();
        int m=matrix[0].size();
        //int[][] res =new int[m][n];
        vector<vector<int>>res;
        for(int i=0;i<m;i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                v.push_back(matrix[j][i]);}
            res.push_back(v);
            
        }
        return res;
    }
};