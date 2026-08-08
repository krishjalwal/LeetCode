// Last updated: 8/9/2026, 12:03:15 AM
class Solution {
public:
    int appendCharacters(string s, string t) {
        int m = s.size() ; int n = t.size();
        int i = 0 ; int j = 0;

        while(i < m && j < n)
        {
            if(s[i] == t[j])
            {
                j++;
            }
            i++;
        }

        return n - j;
    }
};