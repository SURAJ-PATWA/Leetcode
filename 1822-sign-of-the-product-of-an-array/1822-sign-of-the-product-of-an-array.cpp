class Solution {
public:
    int arraySign(vector<int>& nums) {
       int mul=1;;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){mul=-mul;}
            else if(nums[i]==0)return 0;
            }
        
        
        
        
            return mul;
    }
};