class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // handling the case where k is greater than the size of the array
        
        int i = n - k;
        int j = i;
        int a = 0;
        vector<int> ans;
        
        while (a != j) {
            while (i != n) {
                ans.push_back(nums[i++]);
            }
            ans.push_back(nums[a++]);
        }
        
        for (int idx = 0; idx < n; idx++) {
            nums[idx] = ans[idx];
        }
    }
};
