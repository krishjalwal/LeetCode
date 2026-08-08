// Last updated: 8/9/2026, 12:11:26 AM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int sum = 0;
        int res = INT_MAX;
        bool flag = false;
        int len = 0;

        int low = 0;
        int high = 0; //because of variable length window 

        while(high<nums.size())
        {
            sum+=nums[high];

            while(sum>=target)
            {
                len = high - low + 1;
                res = min(len,res);
                sum = sum - nums[low];
                low++;
                flag = true;
            }
            high++;
        }

        if(flag==false)
        {
            return 0;
        }

        return res;
    }
};