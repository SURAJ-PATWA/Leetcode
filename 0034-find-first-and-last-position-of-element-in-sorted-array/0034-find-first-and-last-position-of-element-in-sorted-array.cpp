class Solution {
public:
    int first(vector<int>& nums, int target){
        int n=nums.size();
       int pos=-1;int s=0;int e= n-1;
        
        while(s<=e){
            int mid=(s+e)/2;
            
            if(nums[mid]==target){
                pos=mid;
                e=mid-1;
                
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
                
            }
        }
        return pos;
    }
    
     int Second(vector<int>& nums, int target){
        int n=nums.size();
           int pos=-1;int s=0;int e= n-1;
         while(s<=e){
            int mid=(s+e)/2;
            
            if(nums[mid]==target){
                pos=mid;
                s=mid+1;
                
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
               e=mid-1; 
            }
        }
        return pos;
    }
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>fans(2);
        fans[0]=first(nums,target);
        fans[1]=Second(nums,target);
        return fans;
    }
};