class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        vector<pair<char, int>> freqVector(freq.begin(), freq.end());

        sort(freqVector.begin(), freqVector.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        string result;
        for (auto &it : freqVector) {
            for(int i = 0 ; i < it.second ; i++)
            {
                result += it.first;
            }
        }

        return result;
    }
};