class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int small = INT_MAX;
        int mid = INT_MAX;

        for (int num : nums) {
            if (num <= small) {
                small = num;
            } else if (num <= mid) {
                mid = num;
            } else {
                // Found increasing triplet
                return true;
            }
        }

        return false;
    }
};