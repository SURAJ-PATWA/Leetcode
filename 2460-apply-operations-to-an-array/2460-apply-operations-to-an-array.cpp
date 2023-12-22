class Solution {
public:
    
    
     void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[count]);
                count++;
            }
        }
        
    }
    vector<int> applyOperations(vector<int>& nums) {
        vector<int>ans;int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i + 1]){
                nums[i]=2*nums[i];
                nums[i+1]=0;
            }
            
        }
        
        moveZeroes(nums);
        return nums;
        
        
    }
};