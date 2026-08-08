// Last updated: 8/9/2026, 12:13:25 AM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (i > maxReach) {
                return false; // Cannot reach the current index
            }

            maxReach = std::max(maxReach, i + nums[i]);

            if (maxReach >= nums.size() - 1) {
                return true; // Can reach the last index
            }
        }

        return false;
    }
};