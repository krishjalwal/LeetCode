// Last updated: 8/9/2026, 12:06:59 AM
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp(heights.size(), 0); 
        for(int i = 0 ; i < heights.size() ; i++)
        {
            temp[i] = heights[i];
        }
        int count = 0;
        sort(heights.begin(), heights.end());

        for(int i = 0 ; i < heights.size() ; i++)
        {
            if(heights[i]!=temp[i])
            {
                count++;
            }
        }
        return count;
    }
};
