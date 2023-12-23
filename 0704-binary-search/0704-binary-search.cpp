class Solution {
public:
    int search(vector<int>& arr, int target) {int n=arr.size();
       int s=0,e=n-1; 
         while(s<=e){
             int mid=(s+e)/2;
             if(arr[mid]==target)return mid;
             else if(arr[mid]<target)s++;
             else{e--;}
         } 
                                              return -1;
    }
};