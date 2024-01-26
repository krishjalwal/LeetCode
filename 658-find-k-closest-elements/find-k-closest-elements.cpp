class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        vector<int> ans;
        sort(arr.begin() , arr.end() , [&](int a , int b)
        {
            if(abs(a-x) == abs(b-x))
            {
                return a < b;
            }
            else
            {
                return abs(a-x) < abs(b-x);
            }
        });

        for(int i = 0 ; i < k; i++)
        {
            ans.push_back(arr[i]);
        }

        sort(ans.begin() , ans.end());

        return ans;



    }
};