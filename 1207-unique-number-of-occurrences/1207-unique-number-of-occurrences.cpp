class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     set<int>s;
        unordered_map<int,int>m;
        for( auto i:arr){
            m[i]++;
        }
        for(auto it:m){
            s.insert(it.second);
        }
        return s.size()==m.size();
        
    }
};
