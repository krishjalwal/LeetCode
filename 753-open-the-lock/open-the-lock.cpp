class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead(deadends.begin(), deadends.end());
        if (dead.find("0000") != dead.end())
            return -1;
        if (target == "0000")
            return 0;

        queue<pair<string, int>> q;
        q.push({"0000", 0});
        unordered_set<string> visited;
        visited.insert("0000");

        while (!q.empty()) {
            auto [current, turns] = q.front();
            q.pop();

            for (int i = 0; i < 4; ++i) {
                for (int j = -1; j <= 1; j += 2) {
                    string next = current;
                    next[i] = (next[i] - '0' + j + 10) % 10 + '0';

                    if (next == target)
                        return turns + 1;
                    if (visited.find(next) == visited.end() &&
                        dead.find(next) == dead.end()) {
                        q.push({next, turns + 1});
                        visited.insert(next);
                    }
                }
            }
        }

        return -1;
    }
};