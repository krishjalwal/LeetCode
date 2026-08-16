// Last updated: 8/16/2026, 11:23:20 PM
1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        
5        int count = 0;
6
7        for(int i = 0 ; i < nums.size() ; i++)
8        {
9            int high = i;
10            int product = 1;
11            while(high<nums.size())
12            {
13                product = product * nums[high];
14                if(product < k)
15                {
16                    count++;
17                }
18                else
19                {
20                    break;
21                }
22                high++;
23            }
24        }
25        return count;
26    }
27};