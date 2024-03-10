class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int max = INT_MIN; // Variable to store the maximum value in nums1
        vector<int> ans;

        // Finding the maximum value in nums1
        for(int i = 0 ; i < nums1.size(); i++)
        {
            if(nums1[i] > max)
            {
                max = nums1[i];
            }
        }

        // Creating a vector to track the occurrence of numbers from nums1
        vector<int> nums(max + 1, 0); // Changed max to max + 1 and initialized values to 0

        // Finding the intersection of nums1 and nums2
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            for(int j = 0 ; j < nums2.size() ; j++)
            {
                if(nums1[i] == nums2[j] && nums[nums1[i]] == 0) // Changed nums[i] to nums1[i]
                {
                    ans.push_back(nums1[i]); // Changed nums[i] to nums1[i]
                    nums[nums1[i]] = 1; // Updated nums to indicate occurrence
                }
            }
        }
        return ans;
    }
};
