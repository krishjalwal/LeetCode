class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;
        int i = 0;
        for( ; i < nums.size() ; i++ )
        {
            if(nums[i]>=0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        i = 0;
        int k = 0; int j = 0;
        while(i!=pos.size() && j!=neg.size())
        {
            ans.push_back(pos[i++]); 
            ans.push_back(neg[j++]);
        }

        while(i!=pos.size())
        {
            ans.push_back(pos[i++]);
        }

        while(j!=neg.size())
        {
            ans.push_back(neg[j++]);
        }

        return ans;
    }
};