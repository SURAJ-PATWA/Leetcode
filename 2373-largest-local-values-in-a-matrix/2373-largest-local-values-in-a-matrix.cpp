class Solution {
public:
    int solve(vector<vector<int>>& arr  , int row, int col){
        
        int maxi=INT_MIN;
        for(int i=row;i<=row+2;i++){
            for(int j=col;j<=col+2;j++){
                maxi  = max(arr[i][j],maxi);
            }
        }
        return maxi;
    }


 vector<vector<int>> largestLocal(vector<vector<int>>& arr) {
     int n=arr.size();
       vector<vector<int>>maxans(n-2 , vector<int>(n-2)); 
                                 for(int row=0;row<n-2;row++){
                                     for(int col=0;col<n-2;col++){
                              maxans[row][col]=solve(arr , row,col);
                                     }
                                 }
                                 
                                 return maxans;
                                 
                                 
                                 
                                 }
                                 };