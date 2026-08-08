// Last updated: 8/9/2026, 12:12:00 AM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestmaxending = nums[0];
        int bestminending = nums[0];
        int ans = nums[0];

        for(int i = 1 ; i < nums.size() ; i++)
        {
            int w1 = bestmaxending*nums[i];
            int w2 = bestminending*nums[i];
            int w3 = nums[i];

            bestmaxending = max(w3,max(w1,w2));
            
            bestminending = min(w3,min(w1,w2));

            ans = max(ans,max(bestmaxending,bestminending));
        }
        return ans;
    }
};