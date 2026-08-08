// Last updated: 8/9/2026, 12:05:38 AM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    ans++;
                }
            }
        }
        return ans;
    }
};