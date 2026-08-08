// Last updated: 8/9/2026, 12:03:52 AM
class Solution {
public:
    string capitalizeTitle(string s) {
        int i = 0;
        int n = s.size();
        int j = 0;
        while (i < n) {
            j = i;
            int l = 0;
            while (i < n and s[i] != ' ')
                s[i] = tolower(s[i]), i++, l++;
            if (i > 0)
                i++;
            if (l > 2) {
                s[j] = toupper(s[j]);
            }
        }
        return s;
    }
};
