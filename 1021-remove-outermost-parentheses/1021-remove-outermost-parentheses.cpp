class Solution {
public:
    string removeOuterParentheses(string s) {
        
        stack<char>st;
        string ans="";
        for(auto it:s){
            if(it=='('){
                if(st.size()>0){
                    ans+=it;
                }
                st.push(it);
                
                
            }
            else{
               if(st.size()>1) {
                   ans+=it;
               }
                st.pop();
                
                
            }
        }
        return ans;
        
        
    }
};
