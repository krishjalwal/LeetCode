// Last updated: 8/9/2026, 12:03:39 AM
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                bool isEqual = true;
                for (int k = 0; k < n; k++) {
                    if (grid[i][k] != grid[k][j]) {
                        isEqual = false;
                    }
                }
                if (isEqual) {
                    count++;
                }
            }
        }

        return count;
    }
};