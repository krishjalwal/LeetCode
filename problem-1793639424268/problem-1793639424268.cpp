// Last updated: 11/2/2026, 10:40:24 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
4
5        int n = nums.size();
6        int swaps = 0;
7        int unlock = 0;
8
9        for(int i = 1 ; i < n ; i++)
10        {
11            int j = i;
12
13            while(j > 0 && nums[j] < nums[j-1])
14            {
15                if(locked[j] == 1)
16                {
17                    locked[j] = 0;
18                    unlock++;
19                }
20
21                if(locked[j-1]==1)
22                {
23                    locked[j-1]= 0;
24                    unlock++;
25                }
26
27                if(unlock > k)return -1;
28
29                swap(nums[j],nums[j-1]);
30
31                swaps++;
32
33                j--;
34            }
35        }
36        return swaps+unlock;
37    }
38};