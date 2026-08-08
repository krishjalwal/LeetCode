// Last updated: 8/9/2026, 12:03:45 AM
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> v(n);
        for (auto& i : roads) {
            v[i[0]]++;
            v[i[1]]++;
        }
        sort(v.begin(), v.end());
        long long j = 1;
        long long ans = 0;
        for (auto& i : v)
            ans += (long long)(i * j), j++;
        return ans;
    }
};
