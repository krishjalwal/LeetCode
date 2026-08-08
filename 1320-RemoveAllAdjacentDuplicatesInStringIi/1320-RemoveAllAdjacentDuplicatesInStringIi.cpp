// Last updated: 8/9/2026, 12:06:25 AM
class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<char> st;
        stack<int> counts; // Replaced single int with a count stack to track nested history

        for(int i = 0 ; i < s.size() ; i++)
        {
            // 1. Update the count for the current character
            if(!st.empty() && s[i] == st.top())
            {
                counts.top()++;
            }
            else
            {
                counts.push(1);
            }

            // 2. Push the character onto the stack (fixed double-push issue)
            st.push(s[i]);

            // 3. If count hits k, remove all k characters and restore previous count state
            if(counts.top() == k)
            {
                for(int j = 0; j < k; j++)
                {
                    st.pop();
                }
                counts.pop(); // Remove the count entry for this group
            }
        }

        // Your original result construction logic
        string res = "";
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};