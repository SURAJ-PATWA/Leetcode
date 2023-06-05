class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
    if (n <= 2) {
        return true;
    }
    int x0 = coordinates[0][0], y0 = coordinates[0][1];
    int x1 = coordinates[1][0], y1 = coordinates[1][1];
    int dx = x1 - x0, dy = y1 - y0;
    for (int i = 2; i < n; i++) {
        int xi = coordinates[i][0], yi = coordinates[i][1];
        if (dx * (yi - y1) != dy * (xi - x1)) {
            return false;
        }
    }
    return true; 
    }
};