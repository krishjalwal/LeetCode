// Last updated: 8/27/2026, 8:04:59 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n = nums.size();
5        int low = 0;
6        int high = n -1 ;
7
8        while(low <= high)
9        {
10            int mid = low +(high - low)/2;
11
12            if(nums[mid] == target)
13            {
14                return mid;
15            }
16
17            else if(nums[mid] <= nums[n-1]) //part 1
18            {
19                if(target<=nums[n-1])
20                {
21                    if(nums[mid] <= target)
22                    {
23                        low = mid + 1;
24                    }
25                    else
26                    {
27                        high = mid - 1;
28                    }
29                }
30                else
31                {
32                    high = mid - 1;
33                }
34            }
35            else if(nums[mid] > nums[n-1]) //part2
36            {
37                if(target > nums[n-1])
38                {
39                    if(nums[mid] <= target)
40                    {
41                        low = mid + 1;
42                    }
43                    else
44                    {
45                        high = mid - 1;
46                    }
47                }
48                else
49                {
50                    low = mid + 1;
51                }
52            }
53        }
54        return -1;
55    }
56};