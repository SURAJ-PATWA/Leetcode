class Solution {
public:
    string interpret(string arr) {
        string ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]=='G'){
                ans.push_back('G');
            }
            
            else if(arr[i]=='('){
                if(arr[i+1]==')'){
                    ans.push_back('o');
                }
                else{
                    ans.push_back('a');
                    ans.push_back('l');
                }
            }
        }
        return ans;
    }
};