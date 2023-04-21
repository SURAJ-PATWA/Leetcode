//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
 int    memo[101][501];
 
int solve(int arr[],int i,int j){
    // base case
    if(i>=j)return 0;
    if(memo[i][j]!=-1)return memo[i][j];
    int mn=INT_MAX;
    for(int k=i;k<j;k++){
        int temp_ans=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        
        if(temp_ans < mn){
            mn=temp_ans;
        }
        
        
    }
    return memo[i][j]=mn;
    
}


    int matrixMultiplication(int N, int arr[])
    {
        // code here
       
        
        memset(memo ,-1,sizeof(memo));
        int ans=solve(arr,1,N-1);
        return ans;
        
         
        
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
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends