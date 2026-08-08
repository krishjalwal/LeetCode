// Last updated: 8/9/2026, 12:06:07 AM
class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }
        for (char c : t) {
            freq[c]--;
        }

        int minSteps = 0;

        for (const auto& pair : freq) {
            if (pair.second > 0) {
                minSteps += pair.second;
            }
        }

        return minSteps;
    }
};