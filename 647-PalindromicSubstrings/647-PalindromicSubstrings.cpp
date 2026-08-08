// Last updated: 8/9/2026, 12:08:45 AM
class Solution {
public:
    bool isPalin(string& s, int& i, int& j) {
        string str = s.substr(i, j - i + 1);
        string rev = str;
        reverse(str.begin(), str.end());
        if (str == rev) {
            return true;
        }
        return false;
    }

    int countSubstrings(string s) {
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                if (isPalin(s, i, j)) {
                    ans++;
                }
            }
        }
        return ans;
    }
};