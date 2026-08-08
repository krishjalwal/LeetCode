// Last updated: 8/9/2026, 12:05:43 AM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans ; int sum = 0;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum = 0;
            for(int j = 0 ; j <=i ; j++)
            {
                sum += nums[j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};