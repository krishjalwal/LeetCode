class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());
        vector<int> arr;
        vector<int> answer;
        
        for (int i = 1, j = 0; i <= nums.size(); i++) {
            while (j < nums.size() && nums[j] < i) {
                j++;
            }

            if (j == nums.size() || nums[j] > i) {
                answer.push_back(i);
            }
        }

        return answer;
    }
};