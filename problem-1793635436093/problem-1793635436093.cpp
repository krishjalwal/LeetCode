// Last updated: 11/2/2026, 9:33:56 PM
1class Solution {
2public:
3    int minMergedInteger(vector<int>& nums) {
4        priority_queue<int,vector<int>,greater<int>>pq;\
5
6        vector<int>store;
7        
8        for(int i = 0 ; i < nums.size() ; i=i+2)
9        {
10            int temp = nums[i+1];
11            int count = 0;
12            while(temp!=0)
13            {
14                temp = temp/10;
15                count++;
16            }
17
18            store.push_back(nums[i]*pow(10,count) + nums[i+1]);
19        }
20
21        for(auto i : store)
22            {
23                pq.push(i);
24            }
25
26        return pq.top();
27    }
28};