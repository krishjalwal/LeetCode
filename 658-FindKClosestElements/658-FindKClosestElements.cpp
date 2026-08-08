// Last updated: 8/9/2026, 12:08:42 AM
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        vector<int> ans;
        int l = 0; int h = arr.size() - 1;

        while(h - l >= k)
        {
            if( x - arr[l] > arr[h] - x )
            {
                l++;
            }
            else
            {
                h--;
            }
        }

        for(int i = l ; i <= h ; i++)
        {
            ans.push_back(arr[i]);
        }

        return ans;

    }
};