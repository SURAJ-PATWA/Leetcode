class Solution {
public:
    int countSegments(string s) {
        //base case
        if(s=="")return 0;
        
      int c=0;int n=s.size();
        for(int i=0;i<n;i++){
            if((s[i]!=' ') && (s[i+1]==' '||s[i+1]=='\0'))c++;
        }
        // int i=0;
        // while(i<n){
        //     if(s[i]!=' '){
        //         i++;
        //     }
        //     else{
        //         c++;
        //     }
        // }
        return c;
    }
};
 // if(s==""){
 //            return 0;
 //        }
 //        int c=0;
 //        for(int i=0;i<s.length();i++){
 //            if((s[i] != ' ') && ((s[i+1] == ' ')||(s[i+1]=='\0'))){
 //                c++;
 //            }
 //        }
 //        return c;