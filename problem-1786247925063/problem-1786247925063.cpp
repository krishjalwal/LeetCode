// Last updated: 8/9/2026, 9:28:45 AM
1class Solution {
2public:
3    long long weightedSum(vector<int>& parent, vector<int>& nums) {
4        int n = parent.size();
5        if (n == 0) return 0;
6
7        vector<vector<int>> children(n);
8        int root = -1;
9
10        // 1. Build adjacency list and find the root node
11        for (int i = 0; i < n; i++) {
12            if (parent[i] == -1) {
13                root = i;
14            } else {
15                children[parent[i]].push_back(i);
16            }
17        }
18
19        // 2. Compute depths using Breadth-First Search (BFS)
20        vector<int> depth(n, 0);
21        int max_depth = 0;
22
23        queue<int> q;
24        q.push(root);
25        depth[root] = 1; // Root is at depth 1
26
27        while (!q.empty()) {
28            int u = q.front();
29            q.pop();
30
31            max_depth = max(max_depth, depth[u]);
32
33            for (int v : children[u]) {
34                depth[v] = depth[u] + 1;
35                q.push(v);
36            }
37        }
38
39        // 3. Compute reverse-depth weighted sum
40        long long weighted_sum = 0;
41        for (int i = 0; i < n; i++) {
42            long long weight = max_depth - depth[i] + 1;
43            weighted_sum += 1LL * nums[i] * weight;
44        }
45
46        return weighted_sum;
47    }
48};