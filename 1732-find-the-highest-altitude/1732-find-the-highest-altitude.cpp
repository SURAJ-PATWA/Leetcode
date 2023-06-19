class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>arr(n+1);
        arr[0]=0;
        for(int i=1;i<=n;i++){
            arr[i]=arr[i-1]+gain[i-1];
        }
        int maxi=arr[0];
        for(int i=1;i<arr.size();i++){
            if(maxi<arr[i]){
                maxi=arr[i];
            }
        }
        return maxi;
    }
};