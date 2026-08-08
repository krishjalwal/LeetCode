// Last updated: 8/9/2026, 12:09:26 AM
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> st;
        int n = nums.size();
        vector<int>res(n);

        for(int i = n-2 ; i >= 0 ; i--)
        {
            st.push(nums[i]);
        }

        for(int i = n-1 ; i >=0 ; i--)
        {
            while(!st.empty() && st.top() <= nums[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                res[i] = -1;
            }
            else
            {
                res[i] = st.top();
            }
            st.push(nums[i]);
        }

        return res;
    }
};