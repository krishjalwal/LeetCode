class Solution {
public:
    int bs(vector<int>arr , int start , int x)
    {
        int end = arr.size() - 1;
        while(start<=end)
        {
            int mid = (start + end)/2;
            if(arr[mid] == x)
            {
                return mid;
            }
            else if(arr[mid] < x)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }

    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(bs(nums,i+1,nums[i]+k) != -1)
            {
                ans.insert({nums[i],nums[i] + k});
            }
        }

        return ans.size();
    }
};