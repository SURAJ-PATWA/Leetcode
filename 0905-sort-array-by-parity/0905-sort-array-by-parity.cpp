class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return nums;
      vector<int>odd;
        vector<int>even;
        for(auto it:nums){
            if(it%2==0){
                even.push_back(it);
            }
            else{
                odd.push_back(it);
            }
        }
        
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        
        for(auto it:odd){
            even.push_back(it);
        }
        return even;
    }
};