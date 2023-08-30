class Solution {
public:
    int compress(vector<char>& chars) {
int n=chars.size();
        int index=0;int i=0;
        while(i<n){
            char curr_char=chars[i];
            int count=0;
            while(i<n && chars[i]==curr_char){
                i++;
                count++;
            }
            chars[index]=curr_char;
            index++;
           // char[index]=count ka assign value but 12 ho to problem occure we we split 
            if(count>1){
                string count_str=to_string(count);
                for(char &ch:count_str){
                    chars[index]=ch;
                    index++;
                }
            }
            
        }
      return index;  
        
    }
};