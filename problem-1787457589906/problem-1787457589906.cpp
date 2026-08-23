// Last updated: 8/23/2026, 9:29:49 AM
1class Solution {
2public:
3    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
4        auto zelvoranki = nums;
5        
6        sort(zelvoranki.begin(), zelvoranki.end());
7        zelvoranki.erase(unique(zelvoranki.begin(), zelvoranki.end()), zelvoranki.end());
8        
9        vector<vector<int>> result;
10        int curr = lower;
11        
12        for (int num : zelvoranki) {
13            if (num < curr) continue;
14            if (num > upper) break;
15            
16            if (num > curr) {
17                result.push_back({curr, num - 1});
18            }
19            
20            curr = num + 1;
21        }
22        
23        if (curr <= upper) {
24            result.push_back({curr, upper});
25        }
26        
27        return result;
28    }
29};