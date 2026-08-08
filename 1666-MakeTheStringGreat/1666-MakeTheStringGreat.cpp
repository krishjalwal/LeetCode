// Last updated: 8/9/2026, 12:05:29 AM
class Solution {
public:
    string makeGood(string s) {
        stack<int> st;  string ans = "";

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(!st.empty() && (s[i]==st.top() - 32 || s[i]==st.top() + 32))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        while(!st.empty())
        {
            char a = st.top();
            ans += a;
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
