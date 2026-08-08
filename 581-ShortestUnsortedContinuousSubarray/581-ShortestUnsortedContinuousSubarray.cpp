// Last updated: 8/9/2026, 12:09:00 AM
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int maxval = INT_MIN;
        int minval = INT_MAX;

        int start = -1;
        int end = -2;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]>maxval)
            {
                maxval = nums[i];
            }
            else if(nums[i] < maxval)
            {
                end = i;
            }
        }

        for(int j = nums.size() - 1; j >=0 ; j--)
        {
            if(nums[j]<minval)
            {
                minval = nums[j];
            }
            else if(nums[j] > minval)
            {
                start = j;
            }
        }

        return end - start + 1;
    }
};