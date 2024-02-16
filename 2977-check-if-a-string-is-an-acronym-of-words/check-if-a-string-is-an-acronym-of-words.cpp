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