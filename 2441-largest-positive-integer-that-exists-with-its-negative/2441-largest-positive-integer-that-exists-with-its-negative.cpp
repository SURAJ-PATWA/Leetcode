class Solution {
public:
    int findMaxK(vector<int>& nums) {
//         unordered_set<int>s(nums.begin(),nums.end());
//         int ans=-1;
        
//         for(int num:nums){
//             if(num>0  && s.count(-num)){
//                 ans=max(ans,num);
//             }
//         }
//         return ans;
        
//     }

// this above soln 0[n ] space  
        
        sort(nums.begin(),nums.end());
        
        int i=0;int j=nums.size()-1;
        while(i<j){
            if(-nums[i]==nums[j])return nums[j];
            else if(-nums[i]<nums[j])j--;
            else i++;
        }
        return -1;}
};