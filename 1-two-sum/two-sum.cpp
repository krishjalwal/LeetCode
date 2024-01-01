class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int toFind = 0;
        unordered_map<int,int> indexMap;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            indexMap[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) 
        {
        toFind = target - nums[i];
        auto found = indexMap.find(toFind);

        if (found != indexMap.end() && found->second != i) 
        {
            return {i, found->second};
        }
        }
        return {};
    }
};