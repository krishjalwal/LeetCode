// Last updated: 8/9/2026, 12:13:44 AM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        

        int high = nums.size() -1;
        int low = 0;
        int first = -1;
        int last = -1;

        while(low<=high)
        {
            int mid = low + (high-low)/2;

            if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else if(nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                first = mid;
                high = mid - 1;
            }
        }

        low = 0;
        high = nums.size() - 1;

        while(low<=high)
        {
            int mid = low + (high-low)/2;

            if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else if(nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                last = mid;
                low = mid + 1;
            }            
        }

        vector<int> res;
        res.push_back(first);
        res.push_back(last);

        return res;
    }
};