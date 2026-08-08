// Last updated: 8/9/2026, 12:05:25 AM
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 1, r = 100;
        while (l <= r) {
            int mid = (l + r) / 2;
            int x = 0;
            for (int i = 0; i < nums.size(); ++i)
                x += (nums[i] >= mid);
            // cout<<mid<<" "<<x<<endl;
            if (x == mid)
                return x;
            if (x > mid)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return -1;
    }
};
