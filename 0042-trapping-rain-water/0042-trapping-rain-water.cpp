class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        vector<int>lmax(n);
        vector<int>rmax(n);
        int res=0;
        // for left maximum
        lmax[0]=arr[0];
        rmax[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            lmax[i]=max(arr[i],lmax[i-1]);
        }

     for(int i=n-2;i>=0;i--){
         rmax[i]=max(arr[i],rmax[i+1]);
     }
     for(int i=1;i<n-1;i++){
         res=res+(min(lmax[i],rmax[i])-arr[i]);
     }
return res;



    }
};