class Solution {
public:
    int searchInsert(vector<int>& arr, int x) {
        int n=arr.size();
         int s=0;int e=n-1;
        int indx=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==x)return mid;
            else if(arr[mid] < x){
               
                s=mid+1;
            }
            else{
               e=mid-1; 
            }
        }
        return s;
    }
};