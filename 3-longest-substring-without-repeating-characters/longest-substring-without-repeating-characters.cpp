class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0;
        unordered_map<char, int> charMap;
        int start = 0;

        for (int end = 0; end < n; end++) {
            if (charMap.count(s[end]) && charMap[s[end]] >= start) {
                start = charMap[s[end]] + 1;
            }
            charMap[s[end]] = end;
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};