class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int max = INT_MIN ; int value = 0 ;

        sort(points.begin(),points.end());

        for(int i = 0 ; i < points.size() - 1; i++)
        {
            value = abs(points[i][0] - points[i+1][0]);
            if(value > max)
            {
                max = value;
            }
        }
        return max;
    }
};