class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> ans(nums.size(),0);

        for(int i = 0 ; i < nums.size() ; i++)
        {
            for(int j = 0 ; j < nums.size() ; j++)
            {
                if(nums[i]==nums[j])
                {
                    ans[i]++;
                }
            }
        }

        int max = INT_MIN;

        for(int i = 0 ; i < ans.size() ; i++)
        {
            if(ans[i] > max)
            {
                max = ans[i];
            }
        }

        int count = 0 ;
        
        for(int i = 0 ; i < ans.size() ; i++)
        {
            if(ans[i]==max)
            {
                count++;
            }
        }

        return count;
    }
};