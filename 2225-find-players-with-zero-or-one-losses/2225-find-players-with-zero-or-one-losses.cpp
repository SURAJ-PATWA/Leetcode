class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>lost_map;
       
         for (int i = 0; i < matches.size(); i++) {
        lost_map[matches[i][1]]++;
    }
        
        
        vector<int>notLost;
        vector<int>lostOnce;
        
                for(int i =0;i<matches.size();i++){
                    int winner=matches[i][0];
                    int loser=matches[i][1];
                    
                    if(lost_map.find(winner)== lost_map.end()){
                       notLost.push_back(winner) ;
                        lost_map[winner]=2;
                    }
                    if(lost_map[loser]==1){
                        lostOnce.push_back(loser);
                    }
                    
                }
        sort(begin(notLost),end(notLost));
       sort(begin(lostOnce),end(lostOnce));
        return {notLost,lostOnce};
    }
};