class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
     priority_queue<int ,vector<int>,greater<int>>mini;
        int n=arr.size();
      for(int i=0;i<n;i++){
          mini.push(arr[i]);
          if(mini.size()>k){
              mini.pop();
          }
      }  
        
       return mini.top(); 
        
    }
};