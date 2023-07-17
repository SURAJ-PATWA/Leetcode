class Solution {
public:

bool issafe(int row, int col, vector<string> board, int n) {
    int x = row;
    int y = col;

    // Check for same row
    while (y >= 0) {
        if (board[x][y] == 'Q') {
            return false;
        }
        y--;
    }

    // Check for diagonal in the upper side
    x = row;
    y = col;
    while (x >= 0 && y >= 0) {
        if (board[x][y] == 'Q') {
            return false;
        }
        x--;
        y--;
    }

    // Check for diagonal in the lower side
    x = row;
    y = col;
    while (x < n && y >= 0) {
        if (board[x][y] == 'Q') {
            return false;
        }
        x++;
        y--;
    }

    return true;
}


void solve(int col, vector<vector<string>> &ans, vector<string> &board,int n) {
//base case
if(col==n){
    //addSolution(ans,board,n);
    ans.push_back(board);
    
    return;
}
//solve 1 case and rest code solve Recurn will take

for(int row=0;row<n;row++){
if (issafe(row,col,board,n)){
    //if placing queen is safe
    board[row][col]='Q';
    solve(col+1,ans,board,n);
    board[row][col]='.';
}
}
}

vector<vector<string>> solveNQueens(int n) {
  // Write your code here.
 vector<string> board(n, string(n, '.'));  // creating an empty board
  vector<vector<string>> ans;
  int col = 0;
  solve(col, ans, board, n);
  return ans;
}

}; 