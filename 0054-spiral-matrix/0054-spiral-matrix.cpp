class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int n=mat.size();
        int m=mat[0].size();
        int left=0;int right=m-1;
        int top=0;int bottom=n-1;
        while(left<=right && top<=bottom){
            //  right
            for(int i=left;i<=right;i++){
                ans.push_back(mat[top][i]);
            }
            top++;
            
            //bottom
            
           for(int i=top;i<=bottom;i++){
               ans.push_back(mat[i][right]);
           } 
            right--;
            
            //left            ager single  array ho to 
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
            }
            
            //top  ager single element ho to kuch restristion hoga
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(mat[i][left]);
            }
            left++;}
            
            
        }
        return ans;
    }
};