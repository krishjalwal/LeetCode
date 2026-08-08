// Last updated: 8/9/2026, 12:07:02 AM
class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>st;
        int i = 0;

        while(i<s.size())
        {
            if(st.empty())
            {
                st.push(s[i]);
                i++;
            }
            else if(s[i]==st.top())
            {   
                i++;
                st.pop();
            }
            else
            {
                st.push(s[i]);
                i++;
            }
        }

        string res;
        i = 0;

        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
            i++;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};