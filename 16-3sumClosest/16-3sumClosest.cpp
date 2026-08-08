// Last updated: 8/9/2026, 12:14:17 AM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int closest = nums[0] + nums[1] + nums[2];

        for(int i =  0 ; i < nums.size() ; i++)
        {
            int j = i + 1;
            int k = nums.size() - 1;

            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == target)
                {
                    return sum;
                }

                if(sum < target)
                {
                    if(abs(sum - target) < abs(closest - target))
                    {
                        closest = sum;
                    }

                    j++;
                }

                if(sum > target)
                {
                    if(abs(sum - target) < abs(closest - target))
                    {
                        closest = sum;
                    }

                    k--;
                }

            }
        }
        return closest;
    }
};