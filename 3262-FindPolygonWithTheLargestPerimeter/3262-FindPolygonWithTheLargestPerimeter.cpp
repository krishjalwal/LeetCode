// Last updated: 8/9/2026, 12:02:23 AM
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long sum = 0;
        for(auto it : nums)
        {
            sum+=it;
        }

        sort(nums.begin(),nums.end());

        for(long long i = nums.size() - 1; i >=2 ; i--)
        {
            sum-=nums[i];
            if(nums[i] < sum)
            {
                return sum + nums[i];
            }
        }

        return -1;
    }
};