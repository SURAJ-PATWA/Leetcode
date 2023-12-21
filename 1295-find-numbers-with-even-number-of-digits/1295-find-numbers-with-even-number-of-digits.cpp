class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
      // 1st method   
// int total=0;
//         for(int i=0;i<nums.size();i++){
//          int c=0;
// int digit=nums[i];
// while(digit>0){
// c+=1;
// digit/=10;
// }
//             if(c%2==0){
// total+=1;
//             }



// }
// return total;
        
        // 2nd method
         
        int ans=0;
        for (int i=0;i< nums.size();i++){
        int res=to_string(nums[i]).size();
             if(res%2==0){
                 ans++;
             }
         }
        return ans;
    
        
    
    }
};

  