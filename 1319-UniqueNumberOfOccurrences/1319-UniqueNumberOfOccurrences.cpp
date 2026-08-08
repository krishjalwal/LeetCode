// Last updated: 8/9/2026, 12:06:29 AM

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_set<int> uniqueCounts;

        for (auto it : arr) {
            mp[it]++;
        }

        for (auto it : mp) {
            if (uniqueCounts.find(it.second) != uniqueCounts.end()) {
                return false;
            }
            uniqueCounts.insert(it.second);
        }
        return true;
    }
};
