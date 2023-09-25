class Solution {
public:
    char findTheDifference(string s, string t) {
      char ans =0;
      //   int i=0;int 
      //   while()
        
        for(char i:s){
            ans^=i;
        }
        for(char j:t){
            ans^=j;
        }
        return ans;
    }
};