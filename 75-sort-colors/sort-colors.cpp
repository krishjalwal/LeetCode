class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0 ; int start = 0 ; int end = nums.size() - 1;

        while(i <= end)
        {
            if(nums[i]==0)
            {
                int temp = nums[i];
                nums[i] = nums[start];
                nums[start] = temp;
                start++; i++;
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
    }
};