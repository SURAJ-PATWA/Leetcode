class Solution {
    private:
    
    int SolveFirst(vector<int>& arr , int x){
        int first=-1;
        int start=0;int n=arr.size();int end=n-1;
        
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==x){
                first =mid;
                end=mid-1;
            }
            else if(arr[mid]>x){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return first;
        
    }
    
    
    
    int SolveLast(vector<int>& arr , int x){
        int Last=-1;
        int start=0;int n=arr.size();int end=n-1;
        
         while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==x){
                Last =mid;
                start=mid+1;
            }
            else if(arr[mid]>x){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return Last;
        
    } 
    
    
    
    
    
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int first =SolveFirst(arr,target);
        int last=SolveLast(arr,target);
        return {first ,last};
    }
};