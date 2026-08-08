// Last updated: 8/9/2026, 12:14:43 AM
class Solution {
public:
    bool possible(string &s , int i , int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++; j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            for(int j = i ; j < s.size() ; j++)
            {
                if(possible(s , i , j))
                {
                    string t = s.substr(i , j - i + 1);
                    ans = t.size() > ans.size() ? t : ans;
                }
            }
        }
        return ans;
    }
};