class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>s;
        for(auto i:tokens){
            if(i=="+"||i=="*"||i=="/"||i=="-"){
              int op1=s.top();s.pop();
                int op2=s.top();s.pop();
                
                if(i=="+"){op1=op2+op1;}
                if(i=="-"){op1=op2-op1;}
                if(i=="*"){op1=op2*op1;}
                if(i=="/"){op1=op2/op1;}
                s.push(op1);
                
                
            }
            else{
                s.push(stoi(i));
            }
        }
        return s.top();
    }
};