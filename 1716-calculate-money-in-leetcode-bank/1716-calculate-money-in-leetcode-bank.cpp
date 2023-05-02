class Solution {
public:
    int totalMoney(int n) {
       int weak;int day;int total=0;
        for(int i=1;i<=n;i++){
            weak=i/7;
            day=i%7;
            if(day==0){day=6;}
            total+=weak+day;
        }
        
        return total;
        
    }
};