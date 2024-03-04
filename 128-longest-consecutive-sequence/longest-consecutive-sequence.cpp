class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int maxCount = 1; // Initialize maxCount to 1
        int count = 1;

        for(int i = 0 ; i < nums.size() - 1 ; i++) // Loop until the second last element
        {
            if(nums[i] + 1 == nums[i + 1]) // Check if the next element is consecutive
            {
                count++;
                maxCount = max(maxCount, count);
            }
            else if(nums[i] != nums[i + 1]) // If the next element is not consecutive, reset count
            {
                count = 1;
            }
        }
        return maxCount;
    }
};
