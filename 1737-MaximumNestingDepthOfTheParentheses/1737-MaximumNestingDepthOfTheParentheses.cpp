// Last updated: 8/9/2026, 12:05:21 AM
class Solution {
public:
    int maxDepth(string s) {

        int current = 0;
        int maxi = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '(')
            {
                current++;
                maxi = max(maxi,current);
            }
            else if(s[i] == ')')
            {
                current--;
            }
        }
        return maxi;
    }
};