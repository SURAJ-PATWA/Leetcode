class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n=nums.size();
        vector<int>dummy(n);
        for(int i=0;i<n;i++){
            dummy[(i+k)%n]=nums[i];
        }
        nums=dummy;
       
        
        
        
    }
};