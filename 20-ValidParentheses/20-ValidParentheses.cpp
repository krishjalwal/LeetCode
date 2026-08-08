// Last updated: 8/9/2026, 12:14:12 AM
class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            if (st.empty()) 
            {
                if (s[i] == '}' || s[i] == ']' || s[i] == ')') {
                    return false;
                }
                st.push(s[i]);
                continue;
            } 

            if(s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                st.push(s[i]);
                continue;
            }

            if (st.top() == '{' && s[i] == '}' ||
                       st.top() == '[' && s[i] == ']' ||
                       st.top() == '(' && s[i] == ')') {
                st.pop();
                continue;
            }

            return false;
            
        }

        if(!st.empty())
        {
            return false;
        }
        return true;
    }
};