class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() -1 ;
        int ans = nums[right];
        while(left< right){
            int mid = (left+right)/2;
            if(nums[mid] < nums[right]  ){
                ans = nums[mid];
                right = mid ;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
};