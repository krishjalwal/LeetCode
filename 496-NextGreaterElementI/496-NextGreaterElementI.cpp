// Last updated: 8/9/2026, 12:09:32 AM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>mp;
        stack<int>st;
        vector<int>res;
        int n = nums2.size();

        st.push(nums2[n-1]);

        for(int i = n-2 ; i >= 0 ; i--)
        {
            while(!st.empty() && st.top() < nums2[i])
            {     
                st.pop();
            }
            if(st.empty())
            {
                mp[nums2[i]]=-1;
            }
            else
            {
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }

        for(auto i : nums1)
        {
            if(mp.find(i)!=mp.end())
            {
                res.push_back(mp[i]);
            }
            else
            {
                res.push_back(-1);
            }
        }
        return res;
    }
};