class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // Create a frequency map
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }
        
        // Custom sort based on frequency and value
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freqMap[a] == freqMap[b]) {
                return a > b; // If frequencies are same, sort by value in decreasing order
            }
            return freqMap[a] < freqMap[b]; // Otherwise, sort by frequency in increasing order
        });
        
        return nums;
    }
};