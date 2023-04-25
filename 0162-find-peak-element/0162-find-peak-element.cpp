class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int index=0;int n=arr.size();
       int maxans=arr[0];
       for(int i=1;i<n;i++){
           if(maxans<arr[i]){
              maxans=arr[i];
             index=i;
           }
       }
       return index;
    }
};