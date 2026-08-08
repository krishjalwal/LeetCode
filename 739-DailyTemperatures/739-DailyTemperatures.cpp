// Last updated: 8/9/2026, 12:08:29 AM
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {\
        int n = temp.size();
        stack<int> st;
        vector<int> res;
        res.push_back(0);

        st.push(n-1);
        int curr;

        for(int i = n-2; i >= 0 ; i--)
        {        
            while(!st.empty() && temp[st.top()] <= temp[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                res.push_back(0);
            }
            else
            {
                res.push_back(abs(st.top() - i));
            }           
            st.push(i);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};