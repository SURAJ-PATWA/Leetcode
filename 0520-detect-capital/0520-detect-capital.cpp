class Solution {
public:
    bool detectCapitalUse(string word) { 
        int n=word.size();
        
         if(n==1)
            return true;
        
        int c=0;
    for(auto it:word){
        if(isupper(it)){
            c++;
        }
    }
        
        if(c==n || c==0) //total small or capital
        return true;
        if(c==1  && isupper(word[0])){
            return true;
        }
        return false;
    }
};

