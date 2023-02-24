class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxh;
        for(auto i:stones){
            maxh.push(i);
        }
        while(maxh.size()>1){
          int   top=maxh.top();
            maxh.pop();
           int  second=maxh.top();
            maxh.pop();
            if(top>second){
                maxh.push(top-second);
            }
        }
        return maxh.empty()?0:maxh.top();
    }
};