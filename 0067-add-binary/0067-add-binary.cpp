class Solution {
public:
    string addBinary(string a, string b) {
       int carry=0;
       string ans; int i=a.size()-1,j=b.size()-1;
       while(i>=0 || j>=0 || carry!=0){

     if(i>=0){
         carry +=a[i]-'0';
         i--;}                  // a[i]-'0'  it convert the string to  int     
     if(j>=0){
         carry+=b[j]-'0';
         j--;
     }
     ans+=(carry%2+'0');           // 1+'0'    it convert the int to  string
     carry=carry/2;
       }
    reverse(ans.begin(),ans.end());
    return ans;


    }
};