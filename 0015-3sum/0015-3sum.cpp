class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>>fans;int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        for(int i=0;i<n-2;i++){
          int j=i+1,k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k]; 
                if(sum>0)k--;
                else if(sum<0)j++;
                else{
                    ans.insert({nums[i],nums[j],nums[k]});
                    j++;k--;} }}
        for(auto i:ans){
            fans.push_back(i);}
        return fans;
            
        
        
        
    }
};