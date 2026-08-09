// Last updated: 8/9/2026, 8:57:22 AM
1class Solution {
2public:
3    double minPrice(vector<int>& p, vector<int>& d) {
4
5        sort(p.begin(),p.end());
6        sort(d.begin(),d.end());
7
8        reverse(p.begin(),p.end());
9        reverse(d.begin(),d.end());
10
11        int i1 = 0;
12        int i2 = 0;
13
14        int n1 = p.size();
15        int n2 = d.size();
16
17        double sum=0;
18
19        while(i1<n1 && i2<n2)
20            {
21                sum += (double)(p[i1]*(double)(100-d[i2]))/100;
22                i1++;
23                i2++;
24            }
25
26        while(i1<n1)
27            {
28                sum+=p[i1];
29                i1++;
30            }
31
32        return sum;
33        
34        
35    }
36};