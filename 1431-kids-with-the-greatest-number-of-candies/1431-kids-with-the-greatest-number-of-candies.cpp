class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool>ans;
        int maxi=*max_element(candies.begin(), candies.end());
        int n=candies.size();
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxi){           ans.push_back(true);
            }
        else{
            ans.push_back(false);
        }
        
    }
        return ans;
    }
};
