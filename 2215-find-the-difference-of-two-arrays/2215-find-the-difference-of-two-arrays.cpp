class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      vector<vector<int>>ans={{},{}};
     
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        
        
        for(int i:s1){
            if(s2.count(i)==0){
                ans[0].push_back(i);
            }
        }
        for(int j:s2){
            if(s1.count(j)==0){
                ans[1].push_back(j);
            }
        }
        
        
        
        return ans;
        
    }
};