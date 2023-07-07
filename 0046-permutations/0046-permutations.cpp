class Solution {
    private:
    void solve(vector<int> arr,vector<vector<int>>&ans,int index){
        //base case
        if(index>=arr.size()){
            ans.push_back(arr);
            return;
        }
    
        for(int i=index;i<arr.size();i++){
            swap(arr[index],arr[i]);
            solve(arr,ans,index+1);
            //backtracking
            swap(arr[index],arr[i]);
        }
        
    }
    
    
public:
    vector<vector<int>> permute(vector<int>& arr) {
         vector<vector<int>>ans;
        int index=0;
        solve(arr,ans,index);
        return ans;
    }
};