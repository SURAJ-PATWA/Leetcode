//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool solve(int arr[],int n,int target){
    int dp[n+1][target+1];
    for(int i=0;i<n;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<=target;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(j<arr[i-1]){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
            }
        }
    }
    
    
    return dp[n][target];
    
    
    
    // base case
    // if(N<0)return 0;
    // if(target<0)return 0;
    // if(target==0)return 1;
    
    // bool incl=solve(arr,N-1,target-arr[N-1]);
    // bool excl=solve(arr,N-1,target);
    // return incl ||excl;
}




    int equalPartition(int N, int arr[])
    {
        // code here
        int total_sum=0;
        for(int i=0;i<N;i++){
            total_sum+=arr[i];
        }
        if(total_sum %2!=0)return 0;
        int target=total_sum/2;
       
       return  solve(arr,N,target);  // it is same as 0/1 knapSap problem
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends