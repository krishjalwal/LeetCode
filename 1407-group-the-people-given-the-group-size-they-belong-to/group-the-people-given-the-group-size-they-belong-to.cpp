class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        unordered_map<int,vector<int>> group;
        vector<vector<int>> result;

        for(int i = 0 ; i < arr.size() ; i++)
        {
            int size = arr[i];
            group[size].push_back(i);

            if(group[size].size() == size)
            {
                result.push_back(group[size]);
                group[size].clear();
            }
        }

        return result;

    }
};