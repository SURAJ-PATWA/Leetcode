class Solution {
public:
    
     int  isSubsetSum(vector<int>arr, int sum){
        //start your code
    int n=arr.size();
   int dp[n+1][sum+1];
   dp[0][0]=1;
    // for(int i=0;i<=n;i++){
    //     dp[i][0]=1;
    // }
    for(int i=1;i<=sum;i++){
        dp[0][i]=0;
    }
    // writ your code Here Patwa Ji
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(j<arr[i-1]){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
            }
        }
    }
     return dp[n][sum];  
    }
    
 
    int findTargetSumWays(vector<int>& nums, int target) {
      int n=nums.size();
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
         if(sum < abs(target) || (target+sum) %2 != 0) return 0;  
        int s1=(target+sum)/2;
        return isSubsetSum(nums,s1);
        
    }
};