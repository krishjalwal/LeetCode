class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<bool> zero_rows(rows, false);
        vector<bool> zero_cols(cols, false);

        // Mark the rows and columns that contain zeros
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matrix[i][j] == 0) {
                    zero_rows[i] = true;
                    zero_cols[j] = true;
                }
            }
        }

        // Set entire rows to zero
        for (int i = 0; i < rows; ++i) {
            if (zero_rows[i]) {
                for (int j = 0; j < cols; ++j) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set entire columns to zero
        for (int j = 0; j < cols; ++j) {
            if (zero_cols[j]) {
                for (int i = 0; i < rows; ++i) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};