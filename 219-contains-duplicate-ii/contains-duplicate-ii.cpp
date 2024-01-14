class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int> hashing;

        for (int i = 0; i < nums.size(); ++i) {
            // Check if the element is already in the hash map and if the difference between indices is less than or equal to k
            if (hashing.count(nums[i]) > 0 && i - hashing[nums[i]] <= k) {
                return true;
            }
            hashing[nums[i]] = i;
        }

        return false;
    }
};