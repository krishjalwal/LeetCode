// Last updated: 8/9/2026, 12:05:48 AM
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> arr;
        for(int i = 1 ; i <= n ; i++)
        {
            if(n % i == 0)
            {
                arr.push_back(i);
            }
        }
        if(arr.size() < k)
        {
            return -1;
        }
        return arr[k-1];
    }
};