// Last updated: 9/5/2026, 1:45:51 PM
1class Solution {
2public:
3    vector<int> computeLPS(string& pattern)
4    {
5        int m = pattern.length();
6        vector<int>lps(m,0);
7        int len = 0;
8        int i = 1;
9
10        while(i < m)
11        {
12            if(pattern[i]==pattern[len])
13            {
14                len++;
15                lps[i] = len;
16                i++;
17            }
18            else
19            {
20                if(len!=0)
21                {
22                    len = lps[len-1];
23                }
24                else
25                {
26                    lps[i]=0;
27                    i++;
28                }
29            }
30        }
31        return lps;
32    }
33
34    bool rotateString(string s, string goal) {
35        if(s.length() != goal.length()) return false;
36        if(s.empty()) return true;
37
38        string text = s+s;
39        string pattern = goal;
40
41        vector<int> lps = computeLPS(pattern);
42
43        int i = 0;
44        int j = 0;
45
46        while(i < text.size())
47        {
48            if(text[i]==pattern[j])
49            {
50                i++;
51                j++;
52            }
53
54            if(j==pattern.length())
55            {
56                return true;
57            }
58
59            else if(i<text.length() && text[i] != pattern[j])
60            {
61                if(j != 0)
62                {
63                    j = lps[j-1];
64                }
65                else
66                {
67                    i++;
68                }
69            }
70        }
71        return false;
72    }
73};