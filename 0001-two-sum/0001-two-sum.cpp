class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {int n=nums.size();
        //Better brute force
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
             return {mp[target-nums[i]],i};
            
            }
         mp[nums[i]]=i;
        }
        return{-1};
        
                                                    // // optimal Solution
                                                    //       int s=0;int e=n-1;
                                                    //    //sort(nums.begin(),nums.end());
                                                    //    while(s<e){
                                                    //        int sum=nums[s]+nums[e];
                                                    //        if(sum==target)return {s,e};
                                                    //        else if(sum<target){
                                                    //            s++;
                                                    //        }
                                                    //        else{
                                                    //            e--;
                                                    //        }
                                                    //    }
                                                    //    return{-1};
    }
};