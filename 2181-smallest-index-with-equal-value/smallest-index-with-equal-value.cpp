class Solution {
public:
    int smallestEqual(vector<int>& nums) {

        int n= nums.size()-1;
        for (int i=0; i<=n;i++)
        {
            if(i%10==nums[i]) return i; 
        }

        return -1;;
    }
};