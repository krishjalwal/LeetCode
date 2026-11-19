// Last updated: 11/19/2026, 4:35:40 PM
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        vector<int>v(26,0);
5
6        for(auto i : sentence)
7        {
8            v[i-'a']++;
9        }
10
11        for(auto it : v)
12        {
13            if(it < 1)
14            {
15                return false;
16            }
17        }
18
19        return true;
20
21    }
22};