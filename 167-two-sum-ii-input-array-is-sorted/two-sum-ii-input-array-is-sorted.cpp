class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0 ; int right = nums.size() - 1; 
        vector<int>ans;

        while(left <right)
        {
            if(nums[left] + nums[right] > target)
            {
                right--;
            }
            else if(nums[left] + nums[right] < target)
            {
                left++;
            }
            else if(nums[left] + nums[right] == target)
            {
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
        }
        return ans;
    }
};