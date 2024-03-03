class Solution {
public:
    bool canConstruct(string s1, string s2) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(auto it : s1)
        {
            mp1[it]++;
        }

        for(auto it : s2)
        {
            mp2[it]++;
        }

        for(auto it : s1)
        {
            if(mp1[it] > mp2[it])
            {
                return false;
            }
        }
        return true;
    }
};