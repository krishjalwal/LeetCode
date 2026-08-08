// Last updated: 8/9/2026, 12:09:54 AM
class Solution {
public:
    int findmax(vector<int>mp)
    {
        int max = INT_MIN;
        for(auto it : mp)
        {
            if(it>max)
            {
                max=it;
            }
        }
        return max;
    }

    int characterReplacement(string s, int k) {
        vector<int>mp(256,0);

        int low = 0 ; int high = 0;
        int len = 1;
        int res = 1;
        int fmax = 0;

        while(high < s.size())
        {
            mp[s[high]]++;
            len = high - low + 1;
            fmax = findmax(mp);
            
            while(len-fmax > k)
            {
                mp[s[low]]--;
                low++;
                len = high-low+1;
                fmax = findmax(mp);
            }

            res = max(res,len);
            high++;

        }
        return res;
    }
};