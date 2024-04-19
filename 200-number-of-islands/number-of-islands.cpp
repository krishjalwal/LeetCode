class Solution {
public:

    void explore(vector<vector<char>> &grid, int rows , int cols)
    {
        int m = grid.size();
        int n = grid[0].size();

        grid[rows][cols]='0';

        if(cols < n - 1 && grid[rows][cols+1] == '1')  //right check
        {
            explore(grid,rows,cols+1);
        }
        
        if(cols > 0 && grid[rows][cols-1] == '1')
        {
            explore(grid,rows,cols-1);
        }

        if(rows < m - 1 && grid[rows+1][cols] == '1')
        {
            explore(grid,rows+1,cols);
        }

        if(rows > 0 && grid[rows-1][cols] == '1')
        {
            explore(grid,rows-1,cols);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        if(m==0)return 0;
        int n = grid[0].size();

        int count = 0;

        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(grid[i][j]=='1')
                {
                    count = count + 1;
                    explore(grid,i,j);
                }
            }
        }
        return count;
    }

};