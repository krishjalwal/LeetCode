// Last updated: 8/9/2026, 12:09:11 AM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        int sum = 0;
        f[0] = 1;
        int ans = 0;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum+=nums[i];
            ans+=f[sum-k];
            f[sum]++;
        }
        return ans;
    }
};