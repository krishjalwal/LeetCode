// Last updated: 8/9/2026, 12:13:28 AM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestending = nums[0];
        int ans = nums[0];

        for(int i = 1 ; i < nums.size() ; i++)
        {
            int v1 = bestending + nums[i]; //2 choices are there only either take current or add yourself with best answer of last index.
            int v2 = nums[i];

            bestending = max(v1,v2); //best answer for the particular index
            ans = max(ans,bestending); //best answer overall.
        }

        return ans;
    }
};