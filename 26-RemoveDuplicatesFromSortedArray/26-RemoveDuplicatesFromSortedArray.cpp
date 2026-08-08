// Last updated: 8/9/2026, 12:13:57 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 0;
        int j = i+1;

        while(j<nums.size())
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else if(nums[i]!=nums[j])
            {
                nums[i+1] = nums[j];
                i++;
                j++;
            }
        }
        return i+1;
    }
};