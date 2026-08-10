// Last updated: 8/10/2026, 6:32:39 PM
1class Solution {
2public:
3
4   bool BST(vector<int>&arr, int low, int high ,int k)
5    {
6        if(k >= arr[low] and  k <= arr[high])
7        {
8
9        
10
11        while(low <= high)
12        {
13            int mid = low + (high - low)/2;
14
15            if(arr[mid]==k)
16            {
17                return true;
18            }
19
20            else if(arr[mid] < k)
21            {
22                low = mid + 1;
23            }
24
25            else
26            {
27                high = mid - 1;
28            }
29        }
30        }
31        return false;
32    }
33
34    bool searchMatrix(vector<vector<int>>& matrix, int target) {
35        
36        int m = matrix.size();
37        int n = matrix[0].size();
38
39        for(int i = 0 ; i < m ; i++)
40        {
41            bool ans = BST(matrix[i],0,n-1,target);
42            if(ans)
43            {
44                return true;
45            }
46        }
47        return false;
48    }
49};