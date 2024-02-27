class Solution {
public:
    int leftSum(int i,vector<int> &nums)
    {
        int sum = 0 ;
        for(int it = 0 ; it < i ; it++)
        {
            sum+=nums[it];
        }
        return sum;
    }

    int rightSum(int i , vector<int> &nums)
    {
        int sum = 0;
        for(int it = i + 1 ; it < nums.size() ; it++)
        {
            sum+=nums[it];
        }
        return sum;
    }

    int pivotIndex(vector<int>& nums) {
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int lsum = leftSum(i,nums);
            int rsum = rightSum(i,nums);
            if(lsum==rsum)
            {
                return i;
            }
        }
        return -1;
    }
};