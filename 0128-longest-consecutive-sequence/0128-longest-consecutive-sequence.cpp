class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        int n=nums.size();
        if(n==0)return 0;
        sort(nums.begin(),nums.end());
        int count=0;
        int lastSmaller=INT_MIN;
        int longest=1;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastSmaller){ // it show that  i am consecutice 
                count++;
                lastSmaller=nums[i];
            }
            else if(lastSmaller!=nums[i]){   // it show that  i am not consecutive  but i am not repeter  agar repter ho to shi chelegacount
                count=1;
                lastSmaller=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};