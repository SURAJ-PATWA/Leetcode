class Solution {
public:
    string convertToTitle(int coln) {
       string res="";
        while(coln){
            int rem=(coln-1)%26;
            res=char('A'+rem)+res;
            coln=(coln-1)/26;
        }
        return res;
        
        
    }
};