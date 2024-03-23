class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        
        while (true) {
            int min_positive = INT_MAX;
            bool all_zeros = true;
            
            // Find the minimum positive value
            for (int num : nums) {
                if (num > 0)
                    min_positive = min(min_positive, num);
                if (num != 0)
                    all_zeros = false;
            }
            
            // If all elements are already zeros, break
            if (all_zeros)
                break;
            
            // Subtract the minimum positive value from all positive elements
            for (int& num : nums) {
                if (num > 0)
                    num -= min_positive;
            }
            
            count++; // Increment operation count
        }
        
        return count;
    }
};