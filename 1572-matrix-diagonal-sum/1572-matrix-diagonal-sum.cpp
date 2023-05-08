class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {
       int n=arr.size();
       int sum=0;
       // first we will find first digonal sum 
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(i==j){
                   sum+=arr[i][j];
               }
           }
       }

       for(int i=0;i<n;i++){
           for(int j=n-i-1;j>=0;j--){
               if(i==j){continue;}
               if(i==n-j-1){sum+=arr[i][j];}
              
           }
       }
       return sum;
    }
};