class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      
       priority_queue<int,vector<int>,greater<int>>mini;
        for(auto i:nums){
         mini.push(i);
         if(mini.size()>k){
             mini.pop();
         }
        }
        return mini.top();
    }
};