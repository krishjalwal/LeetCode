// Last updated: 8/9/2026, 12:10:15 AM
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;

        for(int i = 0 ; i < s.size() ; i++)
        {
            mp[s[i]]++;
        }

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(mp[s[i]]==1)
            {
                return i;
            }
        }

        return -1;
    }
};