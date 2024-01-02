class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            bool visited = false;
            for (int j = 0; j < arr.size(); j++) {
                if (nums[i] == arr[j]) {
                    visited = true;
                    break;
                }
            }
            if (!visited) {
                arr.push_back(nums[i]);
            }
        }
        nums = arr;  // Update nums with the unique elements
        return arr.size();
  
    }
};