class Solution {
public:
    string reverseWords(string s) {
        string ans;int n=s.size();
        stack<string>st;
        for(int i=0;i<n;i++){
            string word;
            if(s[i]==' '){
                continue;   // skip space 
            }
            while(i<n & s[i]!=' '){
               //store the letter into word
                word+=s[i];
                i++;
                
            }
            st.push(word);
        }
        while(!st.empty()){
            ans+=st.top();st.pop();
            if(!st.empty()){
                ans+=" ";
            }
        }
        return ans;
        
    }
};
// if(s.size() == 0) return s;
//         stack<string> stack;
//         string result;
//         for(int i=0; i<s.size(); i++) {
//             string word;
//             if(s[i]==' ') continue; //skip spaces
//             while(i<s.size() && s[i]!=' ' ) { //store continuous letters into word
//                 word += s[i]; i++;
//             }
//             stack.push(word); //push word to the stack
//         }
//         while(!stack.empty()) {
//             result += stack.top(); stack.pop();
//             if(!stack.empty()) result += " ";
//         }
//         return result;