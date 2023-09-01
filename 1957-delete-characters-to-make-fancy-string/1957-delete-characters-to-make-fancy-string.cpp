class Solution {
public:
    string makeFancyString(string s) {
        int c=1;
        
        string res="";
        res+=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1])c++;
            else{
                c=1;
            }
            if(c<=2){
                res+=s[i];
            }
        }
        return res;
        
    }
};