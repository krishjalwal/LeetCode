// Last updated: 10/26/2026, 10:47:48 AM
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        
5        priority_queue<int,vector<int>,greater<int>>pq;
6        
7
8        for(int i = 0 ; i < k ; i++)
9        {
10            pq.push(nums[i]);
11        }
12
13        for(int i = k ; i < nums.size() ; i++)
14        {
15            if(nums[i] < pq.top())
16            {
17                continue;
18            }
19            else
20            {
21                pq.pop();
22                pq.push(nums[i]);
23            }
24        }
25        
26        return pq.top();
27    }
28};