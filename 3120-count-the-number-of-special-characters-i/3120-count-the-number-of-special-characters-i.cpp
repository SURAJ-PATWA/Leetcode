class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>lower(26,0),upper(26,0);
        for(auto i:word){
            if(islower(i)){
                lower[i-'a']++;
            }
            else{
                upper[i-'A']++;
            }
        }
        int c=0;
        for(int i=0;i<26;i++){
            if(lower[i]!=0   &&   upper[i]!=0){
                c++;
            }
        }
        return c;
    }
};

 