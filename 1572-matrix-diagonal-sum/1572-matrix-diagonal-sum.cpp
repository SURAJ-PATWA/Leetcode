class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {
       int N=arr.size();
       
        int sum1=0;
       
        for(int i=0;i<N;i++){
            sum1+=arr[i][i];
           
        }
        
        
        for(int i=0;i<N;i++){
            
            
            if(i!=N-i-1){
                sum1+=arr[i][N-i-1]; 
            }
        }
        return sum1;
        
        
        
        
        
        
        
        
        
        
        
        
        
       // first we will find first digonal sum 
//        for(int i=0;i<n;i++){
//            for(int j=0;j<n;j++){
//                if(i==j){
//                    sum+=arr[i][j];
//                }
//            }
//        }

//        for(int i=0;i<n;i++){
//            for(int j=n-i-1;j>=0;j--){
//                if(i==j){continue;}
//                if(i==n-j-1){sum+=arr[i][j];}
              
//            }
//        }
//        return sum;
    }
};