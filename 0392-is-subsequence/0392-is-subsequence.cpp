class Solution {
public:
    bool isSubsequence(string s, string t) {
         int  j=0;int n=s.size();
        for(int i=0;i<t.size() & j<n;i++){
            if(s[j]==t[i]){
                j++;
            }
        }
        return j==n;
    }
};