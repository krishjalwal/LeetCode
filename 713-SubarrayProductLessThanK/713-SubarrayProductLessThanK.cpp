// Last updated: 8/9/2026, 12:08:35 AM
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int product = 1;
        int low = 0 ;
        int high = 0;
        int count = 0;

        while(high < nums.size())
        {
            product = product * nums[high];
            while(product >= k)
            {
                product = product / nums[low];
                low++;
            }
            count += (high-low+1);
            high++;
        }
        return count;
    }
};