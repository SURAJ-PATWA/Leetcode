class Solution {
public:
    // void solveSudoku(vector<vector<char>>& board) 
        
    // }
 
bool issafe(int row,int col,vector<vector<char>>&board,int val,int n){
    for(int i=0;i<n;i++){
        //row check
        if(board[row][i]==val)return false;
        //row col
        if(board[i][col]==val)return false;
        //3 X 3 matrix check
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val)return false;
    }
    return true;

}

bool solve(vector<vector<char>>& board) {
int n=board.size();
for (int row = 0; row < n; row++) {
  for (int col = 0; col < n; col++) {
  if(board[row][col]=='.'){
  for(char val='1';val<='9';val++){
      if(issafe(row,col,board,val,n)){
          board[row][col]=val;
          //recursive call
          bool aggesolutionpossible=solve(board);
          if(aggesolutionpossible){// mean next gap haa aak me tum 1 rak rahe ho agar waha 1 na rakw=e kuch aur shi rakega to
              return true;
          }
          else{
              // backtracking
              board[row][col]='.';

          }
      }
    }
    return false;
  }
  
  }
}
return true;


}

void solveSudoku(vector<vector<char>>& board) {

	// Write your code here
    // No need to print the final sudoku
    // Just fill the values in the given matrix

    solve(board);
}
};