// Last updated: 8/9/2026, 12:10:08 AM
#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int count = k;
        
        for(int i = 0 ; i < num.size() ; i++)
        {
            while(!st.empty() && count != 0 && num[i] - '0' < st.top() - '0')
            {
                st.pop();
                count--;
            }
            st.push(num[i]);
        }

        while(!st.empty() && count > 0) 
        {
            st.pop();
            count--;
        }

        string res = "";

        // Append to string (O(1) operation) instead of prepending
        while(!st.empty())
        {                
            res += st.top();
            st.pop();
        }

        // Reverse to restore the correct order
        reverse(res.begin(), res.end());

        // FIX: Trim leading zeros manually without stoi()
        int start = 0;
        while(start < res.size() && res[start] == '0') {
            start++;
        }

        string ans = res.substr(start);

        // If string becomes empty after trimming zeros, return "0"
        if(ans.empty()) {
            return "0";
        }

        return ans;
    }
};