// Last updated: 8/10/2026, 6:25:34 PM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        
5        int m = matrix.size();
6        int n = matrix[0].size();
7
8        int low = 0;
9        int high = m*n - 1;
10
11        while(low <= high)
12        {
13            int mid = low + (high - low)/2;
14
15            int row = mid / n;
16            int col = mid % n;
17
18            if(matrix[row][col] == target)
19            {
20                return true;
21            }
22
23            else if(matrix[row][col] < target)
24            {
25                low = mid + 1;
26            }
27            
28            else
29            {
30                high = mid - 1;
31            }
32        }
33        return false;
34    }
35};