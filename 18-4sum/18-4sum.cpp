// Last updated: 8/9/2026, 12:14:14 AM
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(nums.size() < 4)
        {
            return ans;
        }

        for(int i = 0 ; i < nums.size() - 3 ; i++)
        {
            if(i>0 and nums[i]==nums[i-1])
            {
                continue;
            }
            for(int j = i+1 ; j < nums.size() - 2 ; j++)
            {
                if(j>i+1 and nums[j]==nums[j-1])
                {
                    continue;
                }
                int k = j+1;
                int l = nums.size() -1 ;
                while(k<l)
                {
                    long long sum = (long long) nums[i] + nums[j] + nums[k]+ nums[l];
                    vector<int> temp;

                    if(sum==target)
                    {
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        temp.push_back(nums[l]);
                        ans.push_back(temp);
                        k++;
                        l--;

                        while(k<l and nums[k]==nums[k-1])
                        {
                            k++;
                        }

                        while(k<l and nums[l]==nums[l+1])
                        {
                            l--;
                        }
                    }

                    else if ( sum < target)
                    {
                        k++;
                    }

                    else
                    {
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};