// Last updated: 8/9/2026, 12:09:15 AM
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res = 0;
        int zero = 0;
        int one = 0;
    

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==0)
            {
                zero++;
            }
            else
            {
                one++;
            }

            int diff = zero - one;

            if(diff == 0)
            {
                res = max(res,i+1);
            }

            if(mp.find(diff)==mp.end())
            {
                mp[diff] = i;
            }
            else if(mp.find(diff)!=mp.end())
            {
                int index = mp[diff];
                int len = i - index;
                res = max(res,len);
            }
        }
        return res;
    }
};