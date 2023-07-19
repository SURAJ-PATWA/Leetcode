class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
      sort(intervals.begin(),intervals.end());
        int count=0;
        int res=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(res>intervals[i][0]){
               res=min(res,intervals[i][1]);
                count++;
            }
                else{
                    res=intervals[i][1];
                }
        }
        return count;
    }
};