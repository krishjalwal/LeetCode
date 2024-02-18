class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";

        for(auto it : s)
        {
            if(it >=65 && it <=90)
            {
                char lower = it + 32;
                ans += lower;
            }
            else
            {
                ans+=it;
            }
        }

        return ans;
    }
};