// Last updated: 11/15/2026, 4:30:46 PM
1class Solution {
2public:
3    string addBinary(string a, string b) {
4
5        int m = a.size();
6        int n = b.size();
7
8        reverse(a.begin(),a.end());
9        reverse(b.begin(),b.end());
10
11        int i = 0;
12        int j = 0;
13        int carry = 0;
14
15        string res = "";
16
17        while(i < m and j < n)
18        {
19            int num1 = a[i] - '0';
20            int num2 = b[j] - '0';
21
22            int sum = num1+num2+carry;
23
24            if(sum==0)
25            {
26                res+='0';
27                carry = 0;
28            }
29            else if(sum==1)
30            {
31                res+='1';
32                carry = 0;
33            }
34            else if(sum==2)
35            {
36                res+='0';
37                carry = 1;
38            }
39            else
40            {
41                res+='1';
42                carry = 1;
43            }
44            i++;
45            j++;
46        }
47        while(i < m)
48        {
49            int num1 = a[i] - '0';
50
51            int sum = num1+carry;
52
53            if(sum==0)
54            {
55                res+='0';
56                carry = 0;
57            }
58            else if(sum==1)
59            {
60                res+='1';
61                carry = 0;
62            }
63            else if(sum==2)
64            {
65                res+='0';
66                carry = 1;
67            }
68            else
69            {
70                res+='1';
71                carry = 1;
72            }
73            i++;
74        }
75       
76        while(j < n)
77        {
78            int num2 = b[j] - '0';
79
80            int sum = num2+carry;
81
82            if(sum==0)
83            {
84                res+='0';
85                carry = 0;
86            }
87            else if(sum==1)
88            {
89                res+='1';
90                carry = 0;
91            }
92            else if(sum==2)
93            {
94                res+='0';
95                carry = 1;
96            }
97            else
98            {
99                res+='1';
100                carry = 1;
101            }
102            j++;
103        }
104        if(carry)
105        {
106            res+='1';
107        }
108        reverse(res.begin(),res.end());
109        return res;
110    }
111};