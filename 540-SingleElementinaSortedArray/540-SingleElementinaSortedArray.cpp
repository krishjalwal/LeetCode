// Last updated: 8/28/2026, 3:23:08 AM
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& n) {
4        int xorr = 0;
5
6        for(auto i : n)
7        {
8            xorr = xorr ^ i;
9        }
10
11        return xorr;
12    }
13};