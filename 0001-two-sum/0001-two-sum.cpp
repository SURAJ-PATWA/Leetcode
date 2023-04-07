class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>ans;
      map<int,int>mp;
      for(int i=0;i<nums.size();i++){
          if(mp.find(target-nums[i])!=mp.end()){
         ans.push_back(mp[target-nums[i]]); // return key ka value
         ans.push_back(i);
         return ans;
          }
          mp[nums[i]]=i;
      } 
      return ans; 
    }
};