// Last updated: 8/10/2026, 6:24:05 PM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int m = matrix.size();
5        int n = matrix[0].size();
6
7        int low = 0;
8        int high = (m * n) - 1;
9
10        while (low <= high) {
11            int mid = low + (high - low) / 2;
12
13            // Map 1D index 'mid' to 2D matrix coordinates [row][col]
14            int row = mid / n;
15            int col = mid % n;
16
17            if (matrix[row][col] == target) {
18                return true;
19            } else if (matrix[row][col] < target) {
20                low = mid + 1;  // Search right half
21            } else {
22                high = mid - 1;  // Search left half
23            }
24        }
25
26        return false;
27    }
28};