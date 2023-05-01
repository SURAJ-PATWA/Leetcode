class Solution {
public:
    int secondHighest(string str) {
       set<int>s;
        for(char c:str){
            if(isdigit(c)){
                s.insert(c-'0');// store in integer form
            }  
        }
        if(s.size()<2)return -1;
        auto it=prev(s.end(),2);
        return *it;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};