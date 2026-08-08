// Last updated: 8/9/2026, 12:09:39 AM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(begin(g), end(g));
        sort(begin(s), end(s));
        int i=0,j=0;
        while(i<g.size() && j<s.size())
        {
            if(g[i]<=s[j])
            {
                i++;
            }
            j++;
        }
        return i;
    }
};