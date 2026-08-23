// Last updated: 8/23/2026, 9:27:28 AM
1class Solution {
2public:
3    bool isPalindromic(string s) {
4        string stri = "";
5        
6        for(auto i : s)
7            {
8                stri += bitset<8>(i).to_string();
9            }
10
11        int low = 0;
12        int high = stri.size() - 1;
13
14        while(low < high)
15            {
16                if(stri[low]!=stri[high])
17                {
18                    return false;
19                }
20                else
21                {
22                    low++;
23                    high--;
24                }
25            }
26        return true;
27    }
28};