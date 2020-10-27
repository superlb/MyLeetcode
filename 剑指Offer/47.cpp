class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int i,j;
        for(i=0;i<grid.size();++i)
        {
            for(j=0;j<grid[0].size();++j)
            {
                if(i>0&&j>0)
                {
                    grid[i][j] = max(grid[i-1][j],grid[i][j-1]) + grid[i][j];
                }
                else if(i>0)
                {
                    grid[i][j] += grid[i-1][j];
                }
                else if(j>0)
                {
                    grid[i][j] += grid[i][j-1];
                }
            }
        }
        return grid[i-1][j-1];
    }
};