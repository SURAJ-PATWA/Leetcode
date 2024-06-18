class Solution {
public:
    bool judgeSquareSum(int c) {
      int l=0;long long r=sqrt(c);
        while(l<=r){
            long long ans=l*l+r*r;
            if(ans==c)return true;
            else if(ans < c)l++;
            else r--;
        }
        return false;
    }
};