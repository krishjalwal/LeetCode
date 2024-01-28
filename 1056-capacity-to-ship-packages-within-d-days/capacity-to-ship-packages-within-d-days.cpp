class Solution {
public:
    bool possible(vector<int> w, int d, int m) {
        int total = 0;
        int counter = 1;

        for (int i = 0; i < w.size(); i++) {
            if (total + w[i] > m) {
                counter++;
                total = w[i];
            } else {
                total += w[i];
            }
        }

        return counter <= d;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(), weights.end()); int end = accumulate(weights.begin(),weights.end(),0) + 1;
        int ans = -1;
        while(start<end)
        {
            int mid = (start + end)/2;
            if(possible(weights,days,mid))
            {
                ans = mid;
                end = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};