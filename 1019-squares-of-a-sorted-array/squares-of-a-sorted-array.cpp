class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1 ;

        vector<int> ans;

        while(left <= right)
        {
            int leftNum = nums[left]*nums[left];
            int rightNum = nums[right]*nums[right];

            if(leftNum > rightNum)
            {
                ans.push_back(leftNum);
                left++;
            }
            else
            {
                ans.push_back(rightNum);
                right--;
            }
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};