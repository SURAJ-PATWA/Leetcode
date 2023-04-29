class Solution {
public:
    
    int gcd(int a, int b) 
	{ 
	    // code here
	    
	    if(b==0)return a;
	    return gcd(b,a%b);
	      
	} 
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());int n=nums.size();
       int a=nums[0];
        int b=nums[n-1];
        return gcd(a,b);
        
    }
};