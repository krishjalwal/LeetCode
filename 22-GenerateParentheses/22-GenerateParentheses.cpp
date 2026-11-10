// Last updated: 11/10/2026, 7:56:51 PM
1class Solution {
2public:
3    
4    void solve(int open,int close, int n , string& temp, vector<string>& res)
5    {
6        if(open == n and close == n)
7        {
8            res.push_back(temp);
9            return;
10        }
11
12        if(open < n)
13        {
14            temp.push_back('(');
15            solve(open+1,close,n,temp,res);
16            temp.pop_back();
17        }
18
19        if(close<open)
20        {
21            temp.push_back(')');
22            solve(open,close+1,n,temp,res);
23            temp.pop_back();
24        }
25        return;
26    }
27
28    vector<string> generateParenthesis(int n) {
29
30        vector<string>res;
31        string temp;
32
33        solve(0,0,n,temp,res);
34
35        return res;
36    }
37};