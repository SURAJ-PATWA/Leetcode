class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
      int pos=-1;
    int ans=INT_MAX;
        for(int i=0;i<points.size();i++){
            if(x==points[i][0] or y==points[i][1]){
                int dist=abs(x-points[i][0])+abs(y-points[i][1]);
            
            if(dist<ans){
                pos=i;
                ans=dist;
            }
            }
            
        }
        return pos;
    }
};