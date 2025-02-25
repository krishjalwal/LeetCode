class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0;

        vector<int> arr(nums.size(),0);

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(arr[nums[i]]==-1)
            {
                ans = nums[i];
            }
            arr[nums[i]] = -1;
        }
        return ans; 
    }
};