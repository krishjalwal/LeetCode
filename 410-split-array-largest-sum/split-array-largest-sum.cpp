class Solution {
public:
    
    bool isValid(const vector<int>& nums, int k, int target) {
        int count = 1;
        int sum = 0;

        for (int num : nums) {
            sum += num;
            if (sum > target) {
                sum = num;
                count++;
            }
        }

        return count <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isValid(nums, k, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }

};