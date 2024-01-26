class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0 ; int j =1 ;
        set<pair<int,int>> ans;
        while(j<nums.size())
        {
            if(nums[j] - nums[i] == k)
            {
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else if(nums[j] - nums[i] < k)
            {
                j++;
            }
            else
            {
                i++;
            }
            if(i==j)j++;
        }
        return ans.size();
    }
};