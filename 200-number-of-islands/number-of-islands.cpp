class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();
        
        int count = 0;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    count++;
                    exploreIsland(grid, i, j);
                }
            }
        }
        
        return count;
    }
    
    void exploreIsland(vector<vector<char>>& grid, int row, int col) {
        int m = grid.size();
        int n = grid[0].size();
        
        grid[row][col] = '0'; // Mark current cell as visited
        
        // Check left
        if (col > 0 && grid[row][col - 1] == '1') {
            exploreIsland(grid, row, col - 1);
        }
        // Check right
        if (col < n - 1 && grid[row][col + 1] == '1') {
            exploreIsland(grid, row, col + 1);
        }
        // Check up
        if (row > 0 && grid[row - 1][col] == '1') {
            exploreIsland(grid, row - 1, col);
        }
        // Check down
        if (row < m - 1 && grid[row + 1][col] == '1') {
            exploreIsland(grid, row + 1, col);
        }
    }
};