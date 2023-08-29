class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       
        
        vector<int> lhs(nums.size(), 1);
        vector<int> rhs(nums.size(), 1);
        for(int i = 1; i < nums.size();i++){
            lhs[i] = lhs[i-1] * nums[i-1];
        }
        for(int i = nums.size()-1 ; i >= 1 ; i--){
            rhs[i-1] = rhs[i] * nums[i];
        }
        for(int i = 0;i<nums.size() ;i++){
            nums[i] = lhs[i] * rhs[i];
        }
        return nums;
    }
};