class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
     // base case
        if(nums.size()==k)return nums;
           priority_queue<pair<int,int>>maxi;
           for(int i=0;i<nums.size();i++){
               maxi.push({nums[i],i});
           }
        vector<pair<int,int>>ans;
           while(k--){
               ans.push_back({maxi.top().second,maxi.top().first});
               maxi.pop();
           } 
        sort(ans.begin(),ans.end());
        vector<int>fans;
        for(auto i:ans){
            fans.push_back(i.second);
        }
        return fans;
    }
};