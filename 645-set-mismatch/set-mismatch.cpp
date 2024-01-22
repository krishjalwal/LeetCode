class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(2, 0);

        // Find the duplicated number
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] == nums[j]) {
                    result[0] = nums[i];
                    break;
                }
            }
        }

        // Find the missing number
        for (int i = 1; i <= n; ++i) {
            bool found = false;
            for (int j = 0; j < n; ++j) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result[1] = i;
                break;
            }
        }

        return result;
    }
};