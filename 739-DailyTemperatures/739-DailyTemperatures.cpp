// Last updated: 8/15/2026, 11:25:23 PM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temp) {\
4        int n = temp.size();
5        stack<int> st;
6        vector<int> res;
7        res.push_back(0);
8
9        st.push(n-1);
10        int curr;
11
12        for(int i = n-2; i >= 0 ; i--)
13        {        
14            while(!st.empty() && temp[st.top()] <= temp[i])
15            {
16                st.pop();
17            }
18            if(st.empty())
19            {
20                res.push_back(0);
21            }
22            else
23            {
24                res.push_back(abs(st.top() - i));
25            }           
26            st.push(i);
27        }
28        reverse(res.begin(),res.end());
29        return res;
30    }
31};