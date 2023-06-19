class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=-1;int n=nums.size();
      for(int i=0;i<n-1;i++){
          for(int j=i+1;j<n;j++){
              if(nums[i]<nums[j]){
                  int res=nums[j]-nums[i];
              
              ans=max(ans,res);}
          }
      }
       
     return ans;   
    }
};