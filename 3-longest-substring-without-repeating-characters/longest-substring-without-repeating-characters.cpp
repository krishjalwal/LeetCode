class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0;
        unordered_map<char, int> charMap;
        int i = 0, j = 0;
        while (j < n) {
            if (charMap[s[j]] > 0) {
                charMap[s[i]]--;
                i++;
            } else {
                charMap[s[j]]++;
                maxLen = max(maxLen, j - i + 1);
                j++;
            }
        }
        return maxLen;
    }
};