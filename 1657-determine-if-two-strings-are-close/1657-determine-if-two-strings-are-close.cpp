class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        int m=word1.size();int n=word2.size();
        //base case
        if(m!=n)return false;
        vector<int>freq1(26);
        vector<int>freq2(26);
        for(int i=0;i<n;i++){
            freq1[word1[i]-'a']++;
            freq2[word2[i]-'a']++;
        }
        
        //step 1   check karenge ke same charactr haa ke nhi
        
        for(int i=0;i<26;i++){
           if((freq1[i]==0  && freq2[i]==0)    ||   (freq1[i]!=0  &&freq2[i]!=0))continue;
            else{
                return false;
            }
        }
        
        //step 2  check karenge freq
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        return freq1==freq2;
        
        
    }
};