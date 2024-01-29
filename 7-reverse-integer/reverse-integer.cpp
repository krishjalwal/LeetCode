class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int rem = x % 10;
            
            // Check for overflow before updating ans
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
                return 0;
            }
            
            ans = ans * 10 + rem;
            x /= 10;
        }
        return ans;
    }
};