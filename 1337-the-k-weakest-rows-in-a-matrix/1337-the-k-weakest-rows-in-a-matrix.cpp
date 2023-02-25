class Solution {
public:
     int counting(vector<int>&arr){
         int count=0;
         for(int i=0;i<arr.size();i++){
             if(arr[i]!=0){
                 count++;
             }
         }
        return count; 
     }
    
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       priority_queue<pair<int,int>>maxi;
        vector<int>ans;
        
        for(int i=0;i<mat.size();i++){
            maxi.push({counting(mat[i]),i});
            if(maxi.size()>k){
                maxi.pop();
            }
        }
        
        while(maxi.size()>0){
            ans.push_back(maxi.top().second);
            maxi.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
        
        
    }
};