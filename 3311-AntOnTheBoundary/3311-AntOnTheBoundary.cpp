// Last updated: 8/9/2026, 12:02:21 AM
class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        
        int sum = 0 ; int n = nums.size(); int count = 0 ; 

        for(int i = 0 ; i < n ; i++)
        {
            sum += nums[i];
            if(sum==0)
            {
                count++;
            }
        }

        return count;
        
    }
};