class Solution {
public:
    int longestPalindrome(string s) {
        // odd=2 =>even=6 output  =>6-2+1=7answer
     unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second%2!=0){
                count++;
            }
        }
        if(count>1){
            return s.size()-count+1;
        }
        return s.size();
        
        
    }
};

 // int longestPalindrome(string s) {
 //        unordered_map<char,int> map;
 //        for(int i=0;i<s.length();i++){
 //            map[s[i]]++;
 //        }
 //        int cnt=0;
 //        for(auto i:map){
 //            if(i.second%2!=0){
 //                cnt++;
 //            }
 //        }
 //        if(cnt>1){
 //            return s.length()-cnt+1;
 //        }
 //        return s.length();
 //    }