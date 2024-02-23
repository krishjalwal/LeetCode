class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        vector<vector<int>> ans_store;
        int count = 0 ;

        for(auto it : nums)
        {
            mp[it]++;
        }
        for(auto it : mp)
        {
            if(it.second > 0)
            {
                count++;
            }
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {
            vector<int> temp_store;
            for(auto &it : mp)
            {
                if(it.second > 0)
                {
                    temp_store.push_back(it.first);
                    it.second -= 1;
                }  
            }
            if(temp_store.size()!=0)
            {
                ans_store.push_back(temp_store);
                
            }
            else
            {
                break;
            }
        }

        return ans_store;
    }
};