class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n=a.size();
        int res=1;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                a[res]=a[i+1];
                res++;
            }
        }
        
        return res;
        
    }
};




 // removeDuplicates(vector<int>& nums) {
 //        int j=1; 
 //        for(int i=0;i<nums.size()-1;i++){
 //            if(nums[i]!=nums[i+1]){           
 //                // swap(nums[j],nums[i+1]);
 //                nums[j]=nums[i+1];
 //                j++;
 //            }
 //        }
 //        return j;