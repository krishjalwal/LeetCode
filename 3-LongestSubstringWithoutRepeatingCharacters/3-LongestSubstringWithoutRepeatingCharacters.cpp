// Last updated: 8/9/2026, 12:14:48 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
        {
            return 0;
        }
        int low = 0;
        int high = 0;

        int len = 0;
        int res = INT_MIN;

        unordered_map<char,int>mp;

        while(high < s.size())
        {
            mp[s[high]]++;

            while(mp[s[high]]>1)
            {
                mp[s[low]]--;
                low++;
            }
            len = high - low + 1;
            res = max(len,res);
            high++;
        }

        return res;
    }
};