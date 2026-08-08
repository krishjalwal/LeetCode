// Last updated: 8/9/2026, 12:07:30 AM
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        int ans = 0;
        int sum = 0;
        int rem;
        f[0]=1;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum+=nums[i];
            if(sum%k < 0)
            {
                rem = sum%k + k;
            }
            else
            {
                rem = sum%k;
            }
            int question = rem;
            ans+=f[question];
            f[rem]++;
        }
        return ans;
    }
};