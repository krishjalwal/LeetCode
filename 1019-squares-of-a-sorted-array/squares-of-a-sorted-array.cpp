class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        if(nums.size()==0){return nums;}
        int i=0;
        int j=nums.size()-1;
        vector<int> result;
        while(i<=j){
            if(abs(nums[i])<abs(nums[j])){
                result.push_back(nums[j]*nums[j]);
                j--;
            }
            else{
                result.push_back(nums[i]*nums[i]);
                i++;
            }
        }
        
        reverse(result.begin(),result.end());
        return result;
    }
};