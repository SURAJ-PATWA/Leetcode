class Solution {
public:
    bool fun(string s,int i,int j){
        while(i<=j){
       if(s[i]!=s[j]){
           return false;
       } 
           i++;j--;
        }
        return true;
    }
    
    
    bool validPalindrome(string s) {
        
        int i=0;int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
              return fun(s,i+1,j)||fun(s,i,j-1);  
            }
          
                i++;j--;
            
        }
        return true;
    }
};

//   bool fun(string s,int i,int j){
//         while(i<=j){
//         if(s[i]!=s[j]) return false;
//         i++;j--;
//         }
//         return true;
//     }
    
    

//     bool validPalindrome(string s) {
//         int i=0;int j=s.size()-1;
//         while(i<j){
//             if(s[i]!=s[j]){
//              return fun(s,i+1,j)||fun(s,i,j-1) ;  
//             }
//             i++;j--;
//         }
//         return true;
        