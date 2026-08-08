// Last updated: 8/9/2026, 12:02:52 AM
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string sup="";
        for(auto &i:words)
        {
            sup+=i[0];
        }
        return s==sup;
    }
};