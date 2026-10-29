// Last updated: 10/29/2026, 6:13:45 PM
1struct cmp
2{
3    bool operator()(pair<int,int>&a,pair<int,int>&b)
4    {
5        return a.second < b.second; //max heap
6    }
7};
8
9class Solution {
10public:
11    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) { //stations are on a road going towards each they arent just random okhayyyy...
12
13        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
14
15        int count = 0;
16        int distance = startFuel;
17        int i = 0;
18
19        while(distance < target)
20        {
21            while(i < stations.size() and stations[i][0] <= distance)
22            {
23                pq.push({stations[i][0],stations[i][1]});
24                i++;
25            }
26
27            if(pq.empty())return -1;
28
29            pair<int,int>p1 = pq.top();
30            pq.pop();
31
32            count++;
33            distance += p1.second;
34        }
35        return count;
36    }
37};