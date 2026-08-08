// Last updated: 8/9/2026, 12:08:33 AM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefix = 0;
        int suffix = 0;
        int totalsum = 0;


        for(int i = 0 ; i < nums.size() ; i++)
        {
            totalsum += nums[i];
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(i==0)
            {
                prefix = 0;
            }
            else
            {
                prefix += nums[i-1];
            }
            
            suffix = totalsum - prefix - nums[i];

            if(prefix==suffix)
            {
                return i;
            }
        }

        return -1;
    }
};