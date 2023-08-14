class Solution {
public:
    
    vector<int> singleNumber(vector<int> a) 
    {
        int n=a.size();vector<int>ans;
        // Code here.
        unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto it:mp){
        if(it.second==1){
           ans.push_back(it.first); 
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
    }
};