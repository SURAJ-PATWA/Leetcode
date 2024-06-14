class Solution {
public:
    int minimumChairs(string s) {
        int maxi=0;int chairs=0;
        
        for(char c:s){
            if(c=='E'){
                chairs++;
            }
            else{
                chairs--;
            }
            maxi=max(maxi , chairs);
        }
        return maxi;
    }
};