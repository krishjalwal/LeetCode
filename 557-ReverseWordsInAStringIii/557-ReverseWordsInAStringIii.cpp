// Last updated: 8/9/2026, 12:09:10 AM
class Solution {
public:
    string reverseWords(string s) {
        vector<string> store;
        string temp = "";
        string ans = "";

        for(int i = s.size() - 1; i >=0 ; i--)
        {
            if(s[i]==' ')
            {
                store.push_back(temp);
                store.push_back(" ");
                temp = "";
            }
            else
            {
                temp+=s[i];
            }
        }
        store.push_back(temp);

        for(int i = store.size()-1;i>=0;i--)
        {
            ans+=store[i];
        }
        return ans;
    }
};