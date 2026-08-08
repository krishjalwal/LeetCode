// Last updated: 8/9/2026, 12:05:53 AM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;

        for (int i = 0; i < n; i ++) {
            res.push_back(nums[i]);
            res.push_back(nums[n + i]);
        }

        return res;
    }
};