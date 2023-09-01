class Solution {
    private:
     bool isLapYear(int n){
            if(n%400==0 ||(n%4==0&& n%100!=0))return true;
            return false;
        }
public:
    int dayOfYear(string data) {
     int yy=stoi(data.substr(0,4));
        int mm=stoi(data.substr(5,2));
        int dd= stoi(data.substr(8,2));
        int ans=dd;
        vector<int>months({31,28,31,30,31,30,31,31,30,31,30,31});
        
       if (isLapYear(yy)) {
        months[1] = 29;
    }
        
        for(int i=0;i<mm-1;i++){
            ans+=months[i];
        }
        return ans;
        
       
        
        
        
        
    }
};

// int yy = stoi(date.substr(0,4));
//         int mm = stoi(date.substr(5,2));
//         int dd = stoi(date.substr(8,2));
//         int result = dd;
//         vector<int> month ({31,28,31,30,31,30,
//                              31,31,30,31,30,31});
//         if(isLeapYear(yy)){
//             month[1]=29;
//         }
//         for(int i=0;i<mm-1;i++){
//             result += month[i];
//         }
//         return result;
//     }
//     bool isLeapYear(int y){
//         if(y%400 == 0 || (y%4 == 0 && y%100 !=0))
//             return true;
//         return false;
//     }