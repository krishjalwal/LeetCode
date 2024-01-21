class Solution {
public:
    int rob(vector<int>& nums) {
    int sum1 = 0;  // Maximum amount of money that can be robbed from houses with even indices
    int sum2 = 0;  // Maximum amount of money that can be robbed from houses with odd indices

    for (int i = 0; i < nums.size(); ++i) {
        if (i % 2 == 0) {
            sum1 = max(sum1 + nums[i], sum2);
        } else {
            sum2 = max(sum2 + nums[i], sum1);
        }
    }

    // Return the maximum money that can be robbed without triggering the alarm
    return max(sum1, sum2);
    }
};