class Solution {
public:
    string truncateSentence(string s, int k) {
        int spaceCount = 0;
        int i = 0;
        for (; i < s.size(); ++i) {
            if (s[i] == ' ') {
                spaceCount++;
                if (spaceCount == k) {
                    break;
                }
            }
        }
        return s.substr(0, i);
    }
};
