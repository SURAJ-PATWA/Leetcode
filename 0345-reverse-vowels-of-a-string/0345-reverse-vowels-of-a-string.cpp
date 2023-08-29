class Solution {
public:
    bool isvowel(char str){
        return (str=='a'||str=='e'||str=='i'||str=='o'||str=='u'||str=='A'||str=='E'||str=='I'||str=='O'||str=='U');
    
    }
    string reverseVowels(string s) {
      int i=0,j=s.size()-1;
      while(i<j){
      //     if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') & (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') ){
      //         swap(s[i],s[j]);
      //     }
      //     else{
      //         i++;j--;
      //     }
      // }  
          if(isvowel(s[i]) && isvowel(s[j])){
              swap(s[i],s[j]);
              i++;j--;
          }
          else if(isvowel(s[i])){
              j--;
          }
          else{
              i++;
          }
      }
      return s;
    }
};