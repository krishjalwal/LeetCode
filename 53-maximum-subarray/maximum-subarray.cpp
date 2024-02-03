class Solution {
public:

    int maxSubArrayHelper(vector<int>&v , int start , int end)
    {
        if (start == end) {
            return v[start]; // base case: single element
        }

        int maxLeftBorderSum = INT_MIN; 
        int maxRightBorderSum = INT_MIN;
        int mid = start + ((end - start) >> 1);

        int maxLeftSum = maxSubArrayHelper(v, start, mid);
        int maxRightSum = maxSubArrayHelper(v, mid + 1, end);

        int leftSum = 0; 
        int rightSum = 0;

        // Calculate maxLeftBorderSum
        for (int i = mid; i >= start; i--) {
            leftSum += v[i];
            if (leftSum > maxLeftBorderSum) maxLeftBorderSum = leftSum;
        }

        // Calculate maxRightBorderSum
        for (int i = mid + 1; i <= end; i++) {
            rightSum += v[i];
            if (rightSum > maxRightBorderSum) maxRightBorderSum = rightSum;
        }

        int crossSum = maxLeftBorderSum + maxRightBorderSum;

        return max(crossSum, max(maxLeftSum, maxRightSum));
    }

    int maxSubArray(vector<int>& nums) {
        return maxSubArrayHelper(nums, 0, nums.size() - 1);
    }
};
