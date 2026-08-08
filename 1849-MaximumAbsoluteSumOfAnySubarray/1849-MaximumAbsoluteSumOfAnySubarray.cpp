// Last updated: 8/9/2026, 12:04:55 AM
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        if(nums.size() < 2)
        {
            return abs(nums[0]);
        }
        int bestmaxending = nums[0];
        int bestminending = nums[0];
        int ans = nums[0];

        for(int i = 1 ; i < nums.size() ; i++)
        {
            int w1 = bestmaxending + nums[i];
            int w2 = bestminending + nums[i];
            int w3 = nums[i];

            bestmaxending = max(w1,w3);
            bestminending = min(w2,w3);

            ans = max(ans,max(bestmaxending,abs(bestminending)));
        }
        return ans;
    }
};