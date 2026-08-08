// Last updated: 8/9/2026, 12:12:53 AM
class Solution {
public:

    bool sahi(vector<int>have,vector<int>need)
    {
        for(int i = 0 ; i < 256 ; i++)
        {
            if(have[i] < need[i])
            {
                return false;
            }
        }
        return true;
    }

    string minWindow(string s, string t) {
        int low = 0;
        int high = 0;
        int len = 0 ;
        int res = INT_MAX;
        int start = 0;
        
        vector<int> have(256,0);
        vector<int> need(256,0);

        for(int i = 0 ; i < t.size() ; i++)
        {
            need[t[i]]++;
        }

        while(high < s.size())
        {
            have[s[high]]++;

            while(sahi(have,need))
            {
                len = high - low + 1;
                if(len < res)
                {
                    res = len;
                    start = low;
                }
                have[s[low]]--;
                low++;
            }
            high++;
        }
        if(res==INT_MAX)return "";
        return s.substr(start,res);  
    }
};