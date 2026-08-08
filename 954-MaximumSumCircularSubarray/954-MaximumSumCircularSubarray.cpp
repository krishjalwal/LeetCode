// Last updated: 8/9/2026, 12:07:40 AM
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int fullsum;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            fullsum += nums[i];
        }

        int bestmaxending = nums[0];
        int bestminending = nums[0];
        int ans = nums[0];
        int max_normal = nums[0]; //to take record of bestmaxending and check if its less than 0

        for(int i = 1 ; i < nums.size() ; i++)
        {
            int w1 = bestmaxending + nums[i];
            int w2 = bestminending + nums[i];
            int w3 = nums[i];

            bestmaxending = max(w1,w3);
            bestminending = min(w2,w3);

            max_normal = max(max_normal,bestmaxending);

            ans = max(ans,max(bestmaxending,fullsum-bestminending));
        }

        if(max_normal < 0)
        {
            return max_normal;
        }
        return ans;
    }
};