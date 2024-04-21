class Solution {
public:
    int firstUniqChar(string S) {
        map<char,int>mp;
       
       for(int i=0;i<S.size();i++){
           mp[S[i]]++;
       }
       for(int i=0;i<S.size();i++){
           if(mp[S[i]]==1){
               return i;
           }
       }
       return -1; 
    }
};