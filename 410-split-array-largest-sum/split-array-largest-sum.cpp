class Solution {
public:

    bool possible(vector<int>& arr, int x, int mid) {
        int total = 0;
        int counter = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > mid) {
                return false;
            }
            if (total + arr[i]> mid) {
                counter++;
                total = arr[i];
                if(counter>x)
                {
                    return false;
                }
            }
            else
            {
                total += arr[i];
            }
        }

        return counter < x;
    }

    int splitArray(vector<int>& nums, int k) {
        int start = 0;
        int end = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;

        while (start <= end) {
            int mid = (start + end) / 2;
            if (possible(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};