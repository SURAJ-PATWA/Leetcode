class Solution {
public:
    string largestOddNumber(string nums) {
       int n=nums.size();
        for(int i=n-1;i>=0;i--){
            if(nums[i]%2==0)nums.pop_back();
            else{
                break;
            }
        }
        return nums;
    }
};