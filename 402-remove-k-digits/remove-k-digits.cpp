class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st; 

        for (auto it : num) {
            while (k > 0 && !st.empty() && st.top() > it) {
                k--;
                st.pop();
            }
            st.push(it);
        }

        // Pop remaining digits if k > 0
        while (k > 0 && !st.empty()) {
            k--;
            st.pop();
        }

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        // Remove leading zeros
        while (!ans.empty() && ans.back() == '0') {
            ans.pop_back();
        }

        // If ans is empty, return "0"
        if (ans.empty()) {
            return "0";
        }

        // Reverse ans to get the correct order
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
