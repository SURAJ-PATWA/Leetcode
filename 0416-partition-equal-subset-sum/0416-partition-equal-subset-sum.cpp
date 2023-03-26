class Solution {
public:
    bool  subsetSumProblem(vector<int>& arr,int n,int sum){
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++){dp[i][0]=1;}
        for(int j=1;j<=sum;j++){
            dp[0][j]=0;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(j<arr[i-1]){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
                }
            }
        }
       return dp[n][sum]; 
        
    }
    
    
    
    bool canPartition(vector<int>& arr) {
    int total_sum=0;int n=arr.size();
        for(int i=0;i<n;i++){
            total_sum+=arr[i];
        }
        if(total_sum %2!=0)return 0;
        int target=total_sum/2;
        // baki same as subset sum problem
        return subsetSumProblem(arr,n,target);
        
    }
};