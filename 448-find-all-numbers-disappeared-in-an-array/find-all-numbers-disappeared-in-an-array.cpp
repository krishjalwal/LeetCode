class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> answer;

        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        // Iterate through the array again to find missing numbers
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                answer.push_back(i + 1);
            }
        }

        return answer;
    }
};