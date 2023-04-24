class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
      priority_queue<int>pq;
	    pq.push(-1);
	    for(int i=n-1;i>=0;i--){
	        int ans=pq.top();
	        pq.push(arr[i]);
	        arr[i]=ans;
	    }
	    
        return arr;
        
        
        
    }
};