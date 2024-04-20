class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> result;
        int m = land.size();
        int n = land[0].size();
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (land[i][j] == 1) {
                    vector<int> corner = findCorner(land, i, j);
                    result.push_back(corner);
                }
            }
        }
        
        return result;
    }
    
    vector<int> findCorner(vector<vector<int>>& land, int row, int col) {
        int m = land.size();
        int n = land[0].size();
        vector<int> corner(4, 0);
        
        int r2 = row, c2 = col;
        
        // Find bottom right corner of the group
        while (r2 < m && land[r2][col] == 1) {
            c2 = col;
            while (c2 < n && land[r2][c2] == 1) {
                land[r2][c2] = 0; // Mark cell as visited
                c2++;
            }
            r2++;
        }
        
        corner[2] = r2 - 1;
        corner[3] = c2 - 1;
        
        // Find top left corner of the group
        corner[0] = row;
        corner[1] = col;
        
        return corner;
    }
};




