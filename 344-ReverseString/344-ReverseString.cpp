// Last updated: 8/9/2026, 12:10:29 AM
class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        vector<int>res;

        for(int i = 0 ; i < s.size() ; i++)
        {
            st.push(s[i]);
        }

        while(!st.empty())
        {
            char c = st.top();
            res.push_back(c);
            st.pop();
        }
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            s[i]=res[i];
        }

    }
};