class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        // Try to Solve top Down DP Approach Or Tabulation method
        int m=text1.size(),n=text2.size();
        int dp[1001][1001];
        for(int i=0;i<=m;i++){dp[i][0]=0;}
        for(int i=0;i<=n;i++){dp[0][i]=0;}
   for(int i=1;i<=m;i++){
       for(int j=1;j<=n;j++){
           if(text1[i-1]==text2[j-1]){
               dp[i][j]=1+dp[i-1][j-1];}
           else{
               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}}}           
        return dp[m][n];}};


         