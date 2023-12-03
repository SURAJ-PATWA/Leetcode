class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=n-1;i>=2;i--){
            int l=0;int h=i-1;
            while(l<h){
                if(nums[i]<nums[l]+nums[h])
                {
                    ans+=(h-l);
                    h--;
                }
                else{
                    l++;
                }
            }
            
        }
        return ans;
    }
};