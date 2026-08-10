// Last updated: 8/10/2026, 8:02:53 PM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int m = matrix.size();
5        int n = matrix[0].size();
6
7        // Start at top-right corner
8        int row = 0;
9        int col = n - 1;
10
11        while (row < m && col >= 0) {
12            if (matrix[row][col] == target) {
13                return true; // Target found
14            } 
15            
16            else if (matrix[row][col] > target) 
17            {
18                col--; // Target is smaller, eliminate current column
19            } 
20            else 
21            {
22                row++; // Target is larger, eliminate current row
23            }
24        }
25
26        return false; // Target not found
27    }
28};