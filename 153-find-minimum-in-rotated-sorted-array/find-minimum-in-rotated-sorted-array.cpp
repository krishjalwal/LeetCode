class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int min = INT_MAX;

        for(int it : nums)
        {
            if(it < min)
            {
                min = it;
            }
        }

        return min;
    }
};