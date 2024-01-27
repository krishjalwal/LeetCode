class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;

        int hash[256] = {0};
        bool ismap[256] = {0};

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(hash[s[i]]==0 && ismap[t[i]]==0)
            {
                hash[s[i]] = t[i];
                ismap[t[i]] = true;
            }
        }

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(hash[s[i]] != t[i])
            {
                return false;
            }
        }
        return true;
    }
};