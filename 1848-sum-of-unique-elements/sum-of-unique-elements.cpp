class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int result = 0;
        unordered_map<int, int> map_count;
        for(auto& i:nums)map_count[i]++;
        for(auto& i:map_count) if(i.second==1) result += i.first;
        return result;
    }
};