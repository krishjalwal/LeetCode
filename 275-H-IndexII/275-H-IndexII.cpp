// Last updated: 8/10/2026, 8:02:09 AM
1class Solution {
2public:
3    int hIndex(vector<int>& c) {
4        int n = c.size();
5        int low = 0, high = n - 1;
6        int ans = 0;
7
8        while (low <= high) {
9            int mid = low + (high - low) / 2;
10
11            // At index `mid`, there are `n - mid` papers with at least `c[mid]` citations
12            if (c[mid] >= n - mid) {
13                ans = n - mid;   // Valid candidate
14                high = mid - 1;  // Try to find a larger H-index further left
15            } else {
16                low = mid + 1;   // Need larger citation values further right
17            }
18        }
19
20        return ans;
21    }
22};