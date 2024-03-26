class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] != nums[nums[i] - 1]) {
                // Swap the elements to put nums[i] in its correct position
                swap(nums[nums[i] - 1], nums[i]);
            } else {
                i++;
            }
        }

        // Iterate through the array to find the elements that appear twice
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != i + 1) {
                duplicates.push_back(nums[i]);
            }
        }

        return duplicates;
    }
};