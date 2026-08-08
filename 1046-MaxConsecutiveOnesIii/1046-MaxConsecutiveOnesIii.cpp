// Last updated: 8/9/2026, 12:07:13 AM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int low = 0;
        int high = 0;
        int len = 0;
        int res = INT_MIN;

        int diff = 0;
        int fmax = 0;
        unordered_map<int,int>mp;

        while(high < nums.size())
        {
            mp[nums[high]]++;
            fmax = mp[1];
            len = high - low + 1;
            diff = len - fmax;

            while(diff > k)
            {
                mp[nums[low]]--;
                low++;
                fmax = mp[1];
                len = high - low + 1;
                diff = len - fmax;
            }

            res = max(len,res);
            high++;
        }
        return res;
    }
};