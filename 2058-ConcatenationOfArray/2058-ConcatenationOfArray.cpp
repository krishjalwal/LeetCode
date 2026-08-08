// Last updated: 8/9/2026, 12:04:31 AM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int> x;

        for (int i = 0; i < nums.size(); i = i + 1) 
        {
            x.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i = i + 1) 
        {
            x.push_back(nums[i]);
        }

        return x;
    }
};