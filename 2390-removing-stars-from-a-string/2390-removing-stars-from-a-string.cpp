class Solution {
public:
    string removeStars(string str) {
      stack<char>s;
        
        
        
        for(int i=0;i<str.size();i++){
            if(s.empty()){
                 s.push(str[i]);
            }
            else if( str[i]!='*'){             
            s.push(str[i]);
            }
            else if(str[i]=='*'){
                s.pop();
            }
            
        }
        
        string ans="";
        while(s.size()){
           ans+=s.top();
            s.pop(); 
        }
        // for(int i=0;i<s.size();i++){
        //     ans+=s.top();
        //     s.pop();
        // }
        reverse(ans.begin(),ans.end());
        return ans;  
    }
};