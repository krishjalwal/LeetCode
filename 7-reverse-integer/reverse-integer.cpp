class Solution {
public:
    int reverse(int x) {
        long long result = 0;  // Use long long to detect overflow
        
        while (x != 0) {
            int digit = x % 10;  // Extract last digit
            result = result * 10 + digit;  // Build reversed number
            x = x / 10;  // Remove last digit
            
            // Check if result exceeds int range
            if (result > INT_MAX || result < INT_MIN) return 0;
        }
        
        return (int)result;
    }
};