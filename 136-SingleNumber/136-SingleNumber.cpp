// Last updated: 8/9/2026, 12:12:13 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int output = 0 ;
        for(int i = 0 ; i < nums.size(); i ++)
        {
            output ^= nums[i];
        }
        return output;
    }
};