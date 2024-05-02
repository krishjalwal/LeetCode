class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int ans = -1;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            for(int j = i + 1 ; j < nums.size() ; j++)
            {
                if(nums[i] + nums[j] == 0)
                {
                    ans = nums[j];
                    return ans;
                }
                
            }
        }
        return ans;

    }
};