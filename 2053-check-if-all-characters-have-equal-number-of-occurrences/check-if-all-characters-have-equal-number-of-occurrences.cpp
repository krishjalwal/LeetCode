class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;  int current = 0 ;

        for(auto it : s)
        {
            mp[it]++;
        }

        for(auto it : mp)
        {
            current = it.second;
            break;
        }

        for(auto it : mp)
        {
            if(it.second != current)
            {
                return false;
            }
            
        }

        
        return true;
    }
};