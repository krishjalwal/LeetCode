class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        
        if(nums.empty())
        {
            return 0;
        }

        int left = 0;
        int minLength = INT_MAX;
        int currentSum = 0;

        for(int right = 0 ; right < nums.size(); right++)
        {
            currentSum += nums[right];
            while(currentSum >= target)
            {
                minLength = min(minLength,right - left + 1);
                currentSum -= nums[left];
                left++;
            }
        }

        if(minLength != INT_MAX)
        {
            return minLength;
        }
        else
        {
            return 0;
        }
    }
};