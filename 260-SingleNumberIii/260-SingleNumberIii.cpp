// Last updated: 8/9/2026, 12:11:00 AM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        long ans = 0;

        for (auto& num : nums) {

            ans ^= num;
        }

        int check = ans & (-ans);

        int grpA = 0;
        int grpB = 0;

        for (auto& num : nums) {

            if (check & num) {
                grpA ^= num;
            } else {
                grpB ^= num;
            }
        }

        return {grpA, grpB};
    }
};
