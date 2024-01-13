class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>hashing;

        for(auto it : nums)
        {
            hashing[it]++;
        }

        for(auto number : hashing)
        {
            int mynumber = number.first;
            int repeat = number.second;

            if(repeat > 1)
            {
                return mynumber;
            }
        }
        return 0;
    }
};