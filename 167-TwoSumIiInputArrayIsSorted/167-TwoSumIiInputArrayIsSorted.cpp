// Last updated: 8/9/2026, 12:11:50 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i = 0;
        int j = nums.size() - 1;
        vector<int> res;

        while(i < j)
        {
            int sum = nums[i]+nums[j];
            if(sum == target)
            {
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }

            else if(sum < target)
            {
                i++;
            }

            else
            {
                j--;
            }
        }
        return res;


    }
};