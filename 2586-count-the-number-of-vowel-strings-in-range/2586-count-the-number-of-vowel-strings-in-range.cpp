class Solution {
public:
    
    
    int vowelStrings(vector<string>& arr, int left, int right) {
       // int n = arr.size();
        int c = 0;
        for(int i = left; i<=right; i++){
                  if((arr[i][0]=='a'||arr[i][0]=='e'||arr[i][0]=='i'||arr[i][0]=='o'||arr[i][0]=='u')&&
                     (arr[i][arr[i].size()-1]=='a'||arr[i][arr[i].size()-1]=='e'||arr[i][arr[i].size()-1]=='i'||arr[i][arr[i].size()-1]=='o'||arr[i][arr[i].size()-1]=='u')){

                c++;
                  }
        } 
        return c;
    }
};
