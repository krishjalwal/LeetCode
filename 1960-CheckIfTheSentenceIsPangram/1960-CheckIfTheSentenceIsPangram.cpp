// Last updated: 8/9/2026, 12:04:42 AM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.size() < 26)
            return false;

        unordered_map<char, int> mp;

        vector<char> chr;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            chr.push_back(ch);
        }

        for (auto it : chr) {
            mp[it]++;
        }

        for (auto it : sentence) {
            mp[it]--;
        }

        bool flag = true;

        for (auto it : mp) {
            if (it.second == 1) {
                return false;
            }
        }

        return true;
    }
};