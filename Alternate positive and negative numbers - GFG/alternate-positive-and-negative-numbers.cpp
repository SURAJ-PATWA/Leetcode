//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
//User function template for C++


	void rearrange(int arr[], int n) {
	    // code here
	     vector<int>pos;  // 9 4 5 0  2
	    vector<int>neg;  // -2 -1 -5 -3
	    for(int i=0;i<n;i++){
	    if(arr[i]>=0){
	        pos.push_back(arr[i]);
	    }
	    else{
	       neg.push_back(arr[i]);
	    }
	    }
	    
	    
	    int i=0,j=0,k=0;
	    
	    while(i<n){
	        if(j<pos.size()){
	            arr[i]=pos[j];
	            i++;j++;
	        }
	        if(k<neg.size()){
	            arr[i]=neg[k];
	            k++;i++;
	        }
	        
	        
	    }
	    
	    
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends