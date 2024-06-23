class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=INT_MAX;int ans=0;
     for(int n:nums) mini = min(mini,n);
        
        for(auto i:nums){
            ans+=i-mini;
        }
        return ans;
    }
};