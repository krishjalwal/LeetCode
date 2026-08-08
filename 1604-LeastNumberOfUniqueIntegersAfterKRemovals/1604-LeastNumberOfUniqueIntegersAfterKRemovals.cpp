// Last updated: 8/9/2026, 12:05:44 AM
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        vector<int> vec{1};

        sort(arr.begin(),arr.end());

        for(int i = 1 ; i < arr.size() ; i++)
        {
            if(arr[i]==arr[i-1])
            {
                vec.back()++;
            }
            else
            {
                vec.push_back(1);
            }
        }

        sort(vec.begin(),vec.end());

        int ans = vec.size();

        for(auto it : vec)
        {
            if(k>=it)
            {
                ans--;
                k = k - it;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};