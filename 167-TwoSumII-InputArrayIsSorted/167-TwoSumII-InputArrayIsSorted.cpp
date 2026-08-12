// Last updated: 8/12/2026, 8:24:24 AM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        
5        int i = 0 ; 
6        int j = numbers.size() -1 ;
7        vector<int>res;
8
9        while(i<j)
10        {
11            if(numbers[i] + numbers[j] == target)
12            {
13                res.push_back(i+1);
14                res.push_back(j+1);
15                break;
16            }
17
18            else if(numbers[i] + numbers[j] < target)
19            {
20                i++;
21            }
22            
23            else
24            {
25                j--;
26            }
27        }
28        return res;
29    }
30};