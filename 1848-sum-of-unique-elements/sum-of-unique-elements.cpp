class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int count = 0 ; 

        for(auto it : nums)
        {
            mp[it]++;
        }

        for(auto it : mp)
        {
            if(it.second==1)
            {
                count += it.first;
            }
        }

        return count; 
    }
};