// Last updated: 8/9/2026, 12:10:49 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[nonZeroIndex]);
                nonZeroIndex++;
            }
        }

    
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i];
        }

    }
};