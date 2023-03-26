class Solution {
public:
     int issubset(vector<int>& nums,int sum,int n){
         int dp[n+1][sum+1];
         dp[0][0]=1;
         for(int i=1;i<=sum;i++){
             dp[0][i]=0;
         }
         
         for(int i=1;i<=n;i++){
             for(int j=0;j<=sum;j++){
                 if(j<nums[i-1]){
                     dp[i][j]=dp[i-1][j];
                 }
                 else{
                     dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                 }
             }
         }
         
         
         return dp[n][sum];
         
         
         
         
     }
    
    
    
    
    
    
    
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
     int n=nums.size();int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        // base condition
        if(sum< abs(target) ||(sum+target)%2!=0) return 0;
        
        int s1=(target+ sum)/2;
        return issubset(nums,s1,n);
        
        
        
        
    }
};