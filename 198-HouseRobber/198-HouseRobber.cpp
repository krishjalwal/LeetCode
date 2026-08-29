// Last updated: 8/29/2026, 7:25:23 AM
1class Solution {
2public:
3    int rob(vector<int>& nums) {
4        int n = nums.size();
5        if(n==1)
6        {
7            return nums[0];
8        }
9        vector<int> store(n);
10        store[0] = nums[0];
11        store[1] = max(nums[0],nums[1]);
12
13        for(int i = 2 ; i < nums.size() ; i++)
14        {
15            store[i] = max(nums[i] + store[i-2],store[i-1]);
16        }
17
18        return *max_element(store.begin(),store.end());
19    }
20};