class Solution {
public:
    bool isPalindrome(int x) {
       int n=x;
        //reverse
        long rev=0;
        while(n>0){
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
            
        }
        return x==rev;
        
        
        
        
    }
};