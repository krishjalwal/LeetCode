// Last updated: 8/9/2026, 12:10:21 AM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s; vector<int> ans;
        for(auto i : nums1)
        {
            for(auto j : nums2)
            {
                if(i==j)
                {
                    s.insert(i);
                }
            }
        }

        for(auto i : s)
        {
            ans.push_back(i);
        }

        return ans;
    }
};