class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        priority_queue<pair<int,int>>maxi;
        for(int i=0;i<k;i++){
            maxi.push({nums[i],i});
        }
        ans.push_back(maxi.top().first);
        for(int i=k;i<nums.size();i++){
            maxi.push({nums[i],i});
            while(maxi.top().second<=i-k){
                maxi.pop();
            }
            ans.push_back(maxi.top().first);
        }
        return ans;
    }
};