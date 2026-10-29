// Last updated: 10/29/2026, 4:29:08 PM
1struct cmp
2{
3    bool operator()(pair<int,int>&a,pair<int,int>&b)
4    {
5        return a.second < b.second; // max heap
6    }
7};
8
9class Solution {
10public:
11    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
12
13        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
14
15        // CHANGED: Keep stations in their original order; don't push all initially.
16        int count = 0;
17        int position = 0; // ADDED: current position
18        int j = 0;        // ADDED: next station index
19
20        while(position + startFuel < target)
21        {
22            vector<pair<int,int>> temp;
23
24            // CHANGED: Add only stations reachable with current fuel.
25            while(j < stations.size() &&
26                  stations[j][0] <= position + startFuel)
27            {
28                pq.push({stations[j][0], stations[j][1]});
29                j++;
30            }
31
32            if(pq.empty()) return -1; // CHANGED
33
34            pair<int,int> p1 = pq.top();
35            pq.pop();
36
37            count++;
38
39            // CHANGED: Subtract distance from current position.
40            startFuel = startFuel - (p1.first - position) + p1.second;
41
42            position = p1.first; // ADDED
43        }
44
45        return count; // CHANGED: zero stops is a valid answer
46    }
47};