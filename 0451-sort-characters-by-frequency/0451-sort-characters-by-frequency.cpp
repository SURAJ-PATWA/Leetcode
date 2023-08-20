class Solution {
public:
    string frequencySort(string s) {
       priority_queue<pair<int,char>>mp; //maxheap according to frequency of characters
        unordered_map<char,int>freq;  //for frequency of characters
        for(char i:s){
            freq[i]++;
        }
        for(auto i:freq){
            mp.push({i.second,i.first}); //heap will be constructed on the basis of frequency
        }
        s="";
        while(!mp.empty()){
            s+=string(mp.top().first,mp.top().second);
            mp.pop();
        }
        return s;
        
        
        
        
        
    }
};
// unordered_map<char,int> freq;           //for frequency of characters
//         priority_queue<pair<int,char>> maxheap; //maxheap according to frequency of characters
//         for(char c: s)
//             freq[c]++;
//         for(auto it: freq)
//             maxheap.push({it.second,it.first}); //heap will be constructed on the basis of frequency
//         s="";   
//         while(!maxheap.empty()){
//             s+=string(maxheap.top().first,maxheap.top().second); //frequency times the character
//             maxheap.pop();
//         }
//         return s;