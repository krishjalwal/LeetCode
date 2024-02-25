class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size() - 1;
        int operations = 0;

        while (start < end) {
            if (nums[start] + nums[end] == k) {
                operations++;
                start++;
                end--;
            } else if (nums[start] + nums[end] < k) {
                start++;
            } else {
                end--;
            }
        }

        return operations;
    }
};
