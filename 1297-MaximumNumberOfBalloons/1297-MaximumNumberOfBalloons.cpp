// Last updated: 8/9/2026, 12:06:33 AM
class Solution {
public:   
    int maxNumberOfBalloons(string text) {
        

        unordered_map<char,int>have;

        have['b'] = 1;
        have['a'] = 1;
        have['l'] = 2;
        have['o'] = 2;
        have['n'] = 1;

        unordered_map<char,int> need;

        for(auto i : text)
        {
            need[i]++;
        }

        int mini = INT_MAX;

        for(auto i : have)
        {
            int curr = need[i.first]/i.second;
            mini = min(mini,curr);
        }

        return mini;
        

    }
};