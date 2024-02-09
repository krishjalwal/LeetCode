class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        
        for(int i = 0 ; i < matrix[0].size() ; i++)
        {
            vector<int> temp;
            for(int j = matrix.size() - 1; j >=0 ; j--)
            {
                temp.push_back(matrix[j][i]);
            }
            ans.push_back(temp);
        }
        matrix = ans;
    }
};