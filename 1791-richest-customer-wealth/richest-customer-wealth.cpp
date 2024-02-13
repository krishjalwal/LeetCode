class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = INT_MIN;

        for(auto it : accounts)
        {
            int count = 0 ;
            for(auto i : it)
            {
                count += i;
                if(count > max)
                {
                    max = count;
                }
            }
        }

        return max;
    }
};