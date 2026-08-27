// Last updated: 8/28/2026, 3:20:19 AM
1class Solution {
2public:
3    int findMin(vector<int>& a) {
4        //mid ka relation dhundna hii yes ya no or equal or bda bda bda bda chota chota chota
5
6        int low = 0;
7        int high= a.size() -1 ;
8        int n = a.size();
9        int ans = INT_MAX;
10        
11
12        while(low<=high)
13        {
14            int mid = low + (high - low)/2;
15
16            if(a[mid]<=a[n-1]) //part1
17            {
18                ans = a[mid];
19                high = mid - 1;
20            }
21            else //a[mid]>a[n-1] part2
22            {
23                low = mid + 1;
24            }
25        }
26        return ans;
27    }
28};