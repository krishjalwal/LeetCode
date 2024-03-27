class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product = 1; 
        int count = 0;

        for(int i = 0 ; i < nums.size() ; i++) {
            product = 1; // Reset product for each i
            for(int j = i ; j < nums.size() ; j++) { // Fix the loop condition
                product *= nums[j];
                if(product < k) {
                    count++;
                }
                else {
                    break;
                }
            }
        }
        return count;
    }
};
