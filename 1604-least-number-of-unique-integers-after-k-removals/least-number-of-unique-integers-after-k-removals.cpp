class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int count = 0;

        unordered_map<int,int>mp;

        for(auto it : arr)
        {
            mp[it]++;
        }

        vector<pair<int,int>> vec(mp.begin(),mp.end());

        sort(vec.begin(),vec.end(),[](const auto&a,const auto&b)
        {
            return a.second < b.second;
        });

        

        for(auto& pair : vec) {
            if(k >= pair.second) {
                k -= pair.second;
                pair.second = 0;
            } else {
                pair.second -= k;
                k = 0;
            }
        }

        for(auto &pair : vec)
        {
            if(pair.second > 0)
            {
                count++;
            }
        }

        return count;

    }
};