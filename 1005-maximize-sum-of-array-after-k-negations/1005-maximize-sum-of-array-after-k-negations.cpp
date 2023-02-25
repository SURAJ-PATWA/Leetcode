class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>minh(nums.begin(),nums.end());
        while(k--){
            int x=minh.top();
            minh.pop();
            minh.push(-1*x);   
        }
        int ans=0;
        while(!minh.empty()){
            ans+=minh.top();
            minh.pop();
        }
        return ans;
        
        
    }
};