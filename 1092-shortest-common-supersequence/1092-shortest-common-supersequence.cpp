class Solution {
public:

    string shortestCommonSupersequence(string s1, string s2) {
       int m=s1.size();int n=s2.size();string ans="";
        // create 2D Array
          int dp[m+1][n+1];
       for(int i=0;i<=m;i++){
           dp[i][0]=0;
       }
        for(int i=0;i<=n;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
             if(s1[i-1]==s2[j-1]){
          dp[i][j]=  1+dp[i-1][j-1];
        }
        else{
            dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
        }   
            }
        }
        
        
        // printing lcs
        
        int i=m,j=n;
        while(i>0 && j>0){
            if(s1[i-1]==s2[j-1])
            {
                ans.push_back(s1[i-1]);i--;j--;
            }
            else if(dp[i][j-1]>dp[i-1][j]){
                   ans.push_back(s2[j-1]);j--; 
                }
                else{
                   ans.push_back(s1[i-1]);i--;   
                }
                
            
            
      
        }
        while(i>0){
             ans.push_back(s1[i-1]);i--; 
        }
         while(j>0){
             ans.push_back(s2[j-1]);j--; 
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    
    
    
    
    }
};