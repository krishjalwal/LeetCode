// Last updated: 8/9/2026, 12:02:10 AM
class Solution {
public:
    int minimumChairs(string s) {
        int count = 0; int ans = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i]=='E')
            {
                count++;
            }
            else
            {
                count--;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};