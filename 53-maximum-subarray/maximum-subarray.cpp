class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int maxtillnow=nums[0];
        int maxsum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxtillnow = max(nums[i], maxtillnow+nums[i]);

            if(maxtillnow>maxsum)
                maxsum=maxtillnow;
        }        
        return maxsum;
            
    }
};