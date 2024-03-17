class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> mp;
        set<string> st;
        int n1 = pattern.length();
        int n2 = s.length();
        int j = 0;
        for (int i = 0; i < n1; i++) {
            string tt = "";
            for (j; j < n2 && s[j] != ' '; j++) {
                tt += s[j];
            }
            j++;
            if (mp.find(pattern[i]) == mp.end() && st.count(tt) == 0) {
                mp[pattern[i]] = tt;
                st.insert(tt);
            }
        }
        string ts = "";
        for (int i = 0; i < n1; i++) {
            ts += mp[pattern[i]];
            if (i != n1 - 1) ts += ' ';
        }
        return ts == s;
    }
};