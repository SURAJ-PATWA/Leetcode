class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& arr) {
        
        for(int i=0;i<arr.size()-1;i++){
            for(int j=0;j<arr[0].size();j++){
                if((arr[i][j]!=arr[i+1][j])){
                   return false; 
                }
            }
        }
        
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[0].size()-1;j++){
                if( (arr[i][j]==arr[i][j+1])){
                   return false; 
                }
            }
        }
        return true;
       
    }
};

//  int n = grid.size();
//         int m = grid[0].size();
        
//         for (int i = 0; i + 1 < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 if (grid[i][j] != grid[i+1][j]) {
//                     return false;
//                 }
//             }
//         }
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j + 1 < m; ++j) {
//                 if (grid[i][j] == grid[i][j+1]) {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }