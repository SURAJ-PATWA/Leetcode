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
