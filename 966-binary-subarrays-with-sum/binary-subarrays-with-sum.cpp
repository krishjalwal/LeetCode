class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int count = 0;
        int left1 = 0, left2 = 0;
        int sum1 = 0, sum2 = 0;

        for (int right = 0; right < n; right++) {
            // Update sum1 for the current window
            sum1 += nums[right];

            // Update sum2 for the current window
            sum2 += nums[right];

            // Shrink the window if sum1 > goal
            while (left1 <= right && sum1 > goal) {
                sum1 -= nums[left1++];
            }

            // Shrink the window if sum2 >= goal
            while (left2 <= right && sum2 >= goal) {
                sum2 -= nums[left2++];
            }

            // If sum1 == goal, update count with the length of the window (left2 - left1)
            if (sum1 == goal) {
                count += left2 - left1;
            }
        }

        return count;
    }
};