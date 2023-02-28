class Solution {
public:
    int sumofdigit(int n){
       int sum=0;
        while(n>0){
            sum+=(n%10)*(n%10);
            n=n/10;
        }
        return sum;
    }
    
    
    bool isHappy(int n) {
        //alwase sum value is 1 or 89
      int temp=n;
        while(true){
            if(temp==1)return true;
            else if(temp==89)return false;
           temp= sumofdigit(temp);
        }
    }
};