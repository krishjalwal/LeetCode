class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0; // Changed variable name from max to maxLen
        unordered_map<char, int> charMap;
        int i = 0, j = 0;

        while (j < n) { // Removed -1 from the condition to fix the infinite loop
            if (charMap[s[j]] > 0) { // Changed > 1 to > 0 to correctly handle repeating characters
                charMap[s[i]]--; // Decrease count of character at index i
                i++; // Move the start pointer forward
            } else {
                charMap[s[j]]++; // Increment count of character at index j
                maxLen = max(maxLen, j - i + 1); // Update maxLen if necessary
                j++; // Move the end pointer forward
            }
        }

        return maxLen;
    }
};