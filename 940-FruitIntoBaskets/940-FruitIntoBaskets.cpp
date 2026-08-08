// Last updated: 8/9/2026, 12:07:46 AM
class Solution {
public:
    int totalFruit(vector<int>& nums) {
        
        int low = 0;
        int high = 0;
        int len = 0;
        int res = INT_MIN;
        int target = 2;

        if(nums.size() <= 2)
        {
            return nums.size();
        }

        unordered_map<int,int> mp;

        while(high < nums.size())
        {
            mp[nums[high]]++;

            while(mp.size() > target)
            {
                if(mp[nums[low]]!=0)
                {
                    mp[nums[low]]--;
                }
                if(mp[nums[low]]==0)
                {
                    mp.erase(nums[low]);
                }
                low++;
            }

            if(mp.size()<=target)
            {
                len = high - low + 1;
                res = max(len,res);
            }
            high++;
        }
        return res;
    }
};