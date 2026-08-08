// Last updated: 8/9/2026, 12:08:51 AM

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }

        double maxAvg = sum / k;

        for (int j = k; j < nums.size(); ++j) {
            sum += nums[j] - nums[j - k];
            maxAvg = max(maxAvg, sum / k);
        }

        return maxAvg;
    }
};
