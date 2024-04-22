class Solution {
public:
    // Function to increment the j-th digit of the lock combination
    string plusOne(string s, int j) {
        string res = s;
        if (res[j] == '9')
            res[j] = '0';
        else
            res[j] += 1;
        return res;
    }

    // Function to decrement the j-th digit of the lock combination
    string minusOne(string s, int j) {
        string res = s;
        if (res[j] == '0')
            res[j] = '9';
        else
            res[j] -= 1;
        return res;
    }

    // Function to find the minimum turns required to open the lock
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> visited;
        vector<string> parent;
        string strlock;
        int count = 0;
        vector<string> child(1, "0000");

        while (!child.empty()) {
            parent = child;
            child = {};

            for (string strlock : parent) {
                if (find(deadends.begin(), deadends.end(), strlock) != deadends.end()) continue;

                if (strlock == target) {
                    return count;
                }

                for (int j = 0; j < 4; j++) {
                    string up = plusOne(strlock, j);
                    if (!visited.count(up)) {
                        child.push_back(up);
                        visited.insert(up);
                    }
                    string down = minusOne(strlock, j);
                    if (!visited.count(down)) {
                        child.push_back(down);
                        visited.insert(down);
                    }
                }
            }
            count++;
        }
        return -1; // Target unreachable
    }
};