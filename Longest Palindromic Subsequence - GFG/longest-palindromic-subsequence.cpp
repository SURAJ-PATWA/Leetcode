//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
   int lcs(int m, int n, string s1, string s2)
    {
        // your code here
     
        
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
        
        
        
        
       return dp[m][n]; 
        
        
    }
  
  
  
    int longestPalinSubseq(string A) {
        //code here
         
        string B=A;
        reverse(B.begin(),B.end());
      
        int m=A.size();int n=B.size();
         int LCS=lcs( m,  n, A, B);
         return LCS;
         
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends