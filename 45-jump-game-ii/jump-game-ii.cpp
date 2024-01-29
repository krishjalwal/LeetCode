class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) {
            return 0; // Already at the last index or no elements to jump
        }

        int jumps = 0;
        int currMaxReach = 0;
        int nextMaxReach = 0;

        for (int i = 0; i < n - 1; ++i) {
            nextMaxReach = std::max(nextMaxReach, i + nums[i]);

            if (i == currMaxReach) {
                // We have reached the current maximum reachable index
                currMaxReach = nextMaxReach;
                jumps++;
            }
        }

        return jumps;
    }
};