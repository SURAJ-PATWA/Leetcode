class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
     int m = matrix.size();
    int n = matrix[0].size();

    int row_start = 0, col_start = 0, row_end = m - 1, col_end = n - 1;

    while (row_start <= row_end && col_start <= col_end) {
        // Print the first row from the remaining rows
        for (int i = col_start; i <= col_end; i++) {
            ans.push_back( matrix[row_start][i]);
        }
        row_start++;

        // Print the last column from the remaining columns
        for (int i = row_start; i <= row_end; i++) {
           
            ans.push_back(matrix[i][col_end]);
        }
        col_end--;

        // Print the last row from the remaining rows
        if (row_start <= row_end) {
            for (int i = col_end; i >= col_start; i--) {
               
                ans.push_back(matrix[row_end][i]);
            }
            row_end--;
        }

        // Print the first column from the remaining columns
        if (col_start <= col_end) {
            for (int i = row_end; i >= row_start; i--) {
              ans.push_back(matrix[i][col_start]);
            }
            col_start++;
        }
    }
return ans;

        
       
        
    }
};