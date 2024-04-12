#pragma GCC optimize("Ofast")
static auto _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> max_left(n, 0);
        vector<int> max_right(n, 0);

        max_left[0] = height[0];
        for (int i = 1; i < n; ++i) {
            max_left[i] = max(max_left[i - 1], height[i]);
        }

        max_right[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            max_right[i] = max(max_right[i + 1], height[i]);
        }

        int water_trapped = 0;
        for (int i = 0; i < n; ++i) {
            int min_height = min(max_left[i], max_right[i]);
            water_trapped += max(0, min_height - height[i]);
        }

        return water_trapped;
    }
};
