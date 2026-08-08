// Last updated: 8/9/2026, 12:12:58 AM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;
        int i = 0;
        int end = nums.size() - 1;

        while(i<=end) // i as mid
        {
            if(nums[i] == 0)
            {
                swap(nums[start],nums[i]);
                start++;
                i++;
            }

            else if(nums[i]==2)
            {
                swap(nums[end],nums[i]);
                end--;
            }

            else
            {
                i++;
            }
        }
        return;
    }
};