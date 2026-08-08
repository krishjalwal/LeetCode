// Last updated: 8/9/2026, 12:07:28 AM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int m = 0;
        // Fix 1: Just use m to loop through and count negatives
        while(m < nums.size() && nums[m] < 0) {
            m++;
        }

        vector<int> arr2;
        vector<int> arr1;

        for(int i = m ; i < nums.size() ; i++) {
            arr2.push_back(nums[i]*nums[i]);
        }

        // Fix 2: Loop backwards from m-1 down to 0 so arr1 is ascending
        for(int i = m - 1 ; i >= 0 ; i--) {
            arr1.push_back(nums[i]*nums[i]);
        }
        
        vector<int> ans;
        int i = 0;
        int j = 0;

        while(i < arr1.size() && j < arr2.size()) {
            if(arr1[i] < arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
            } else {
                ans.push_back(arr2[j]);
                j++;
            }
        }
        
        while(i < arr1.size()) {
            ans.push_back(arr1[i]);
            i++;
        }

        while(j < arr2.size()) {
            ans.push_back(arr2[j]);
            j++;
        }

        return ans;
    }
};