// Last updated: 8/9/2026, 12:10:16 AM
class Solution {
public:
    bool canConstruct(string r, string m) {
        
        unordered_map<char,int>mp;
        for(int i = 0 ; i < r.size() ; i++)
        {
            mp[r[i]]++;
        }

        for(int i = 0 ; i < m.size() ; i++)
        {
            if(mp[m[i]])
            {
                mp[m[i]]--;
            }
        }

        for(auto i : mp)
        {
            if(i.second>0)
            {
                return false;
            }
        }

        return true;
    }
};