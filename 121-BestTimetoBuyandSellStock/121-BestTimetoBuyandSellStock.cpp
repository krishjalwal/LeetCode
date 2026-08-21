// Last updated: 8/22/2026, 1:51:56 AM
1class Solution {
2public:
3    int maxProfit(vector<int>& p) {
4        vector<int>v;
5        int mini = INT_MAX;
6        int prof = INT_MIN;
7
8        for(auto i : p)
9        {
10            if(i<mini)
11            {
12                mini = i;
13            }
14            v.push_back(mini);
15        }
16
17        for(int i = 0; i < p.size() ;i++)
18        {
19            prof = max(prof, p[i]-v[i]);
20        }
21        return prof;
22    }
23};