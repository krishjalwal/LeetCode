class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            

            if(nums[i] == target)
            {
                return i;
            }
            else
            {
                if(target>=nums[i])
                {
                    count = count + 1;
                }
            }
        }
        return count;
    }
};