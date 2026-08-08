// Last updated: 8/9/2026, 12:09:06 AM
class Solution {
public:


    bool sahi(vector<int>need,vector<int>have)
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

    bool checkInclusion(string s1, string s2) {

        if(s2.size() <s1.size())
        {
            return false;
        }
        
        vector<int> need(256,0);
        

        int low = 0;
        int high = s1.size() - 1;

        for(int i = 0 ; i < s1.size() ; i++)
        {
            need[s1[i]]++;
        }

        for(int i = 0 ; i <= s2.size() - s1.size() ; i++)
        {
            vector<int> have(256,0);
            for(int j = i ; j < i + s1.size() ; j++)
            {
                have[s2[j]]++;
            }
            if(sahi(need,have))
            {
                return true;
            }
        }

        return false;
    }
};