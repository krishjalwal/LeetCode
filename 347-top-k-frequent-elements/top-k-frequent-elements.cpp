class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> arr;
        unordered_map<int, int> hashing;

        for(auto it : nums) {
            hashing[it]++;
        }

        
        vector<pair<int, int>> frequencyPairs;
        for (auto it : hashing) {
            frequencyPairs.push_back({it.second, it.first});
        }

       
        sort(frequencyPairs.rbegin(), frequencyPairs.rend());

     
        for (int i = 0; i < k; ++i) {
            arr.push_back(frequencyPairs[i].second);
        }

        return arr;
    }
};