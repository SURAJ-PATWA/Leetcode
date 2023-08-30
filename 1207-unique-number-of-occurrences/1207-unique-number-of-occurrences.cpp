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
// set <int> s;
//         map <int, int> m;
//         for(auto &x : arr){
//             m[x]++;
//         }
//         for(auto it = m.begin() ; it != m.end() ; it++){
//             s.insert(it->second);
//         }
//         if(m.size() == s.size())
//             return true;
//         return false;