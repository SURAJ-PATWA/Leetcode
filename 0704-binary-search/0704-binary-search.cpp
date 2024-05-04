class Solution {
public:
    int search(vector<int>& arr, int k) {
        int n=arr.size();
         int i=0;int j=n-1;
        while(i<=j){
            int mid=i+j/2;
            
            if(arr[mid]==k)return mid;
            else if(arr[mid]>k){
                j--;
            }
            else{
                i++;
            }
        }
        return -1;
    }
};



