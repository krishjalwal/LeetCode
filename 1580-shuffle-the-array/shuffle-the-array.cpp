class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int k = 0;
        int j = n;
        for (int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
            while(j<nums.size()) {
                ans.push_back(nums[j]);
                j++;
                break;
            }
        }
        return ans;
    }
};