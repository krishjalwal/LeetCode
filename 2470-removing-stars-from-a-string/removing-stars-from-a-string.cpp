class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        string ans = "";


        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i]=='*' && !st.empty())
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
            char poped = st.top();
            st.pop();
            ans += poped;
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};