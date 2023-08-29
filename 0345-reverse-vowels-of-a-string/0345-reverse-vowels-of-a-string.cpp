class Solution {
public:
    bool isvowel(char str){
        return (str=='a'||str=='e'||str=='i'||str=='o'||str=='u'||str=='A'||str=='E'||str=='I'||str=='O'||str=='U');
    
    }
    string reverseVowels(string s) {
      int i=0,j=s.size()-1;
      while(i<j){ 
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