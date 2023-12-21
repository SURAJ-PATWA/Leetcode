class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(auto i:words){
            if(i.substr(0,pref.size())==pref){
                c++;
            }
        }
        return c;
        
        
    }
};