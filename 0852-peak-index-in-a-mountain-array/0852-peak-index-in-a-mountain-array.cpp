class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        
    
    
    
     
        int index=0;int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                index=i;
            }
        }
        return index;
        
    }
};