class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        vector<vector<int>> v(grid);
        int i, j;
        for (i = 0; i < v.size(); ++i)
        {
            for (j = 0; j < v[i].size(); ++j)
            {
                if (i == 0 && j == 0)
                    continue;
                else if (i == 0)
                    v[i][j] = v[i][j - 1] + grid[i][j];
                else if (j == 0)
                    v[i][j] = v[i - 1][j] + grid[i][j];
                else
                    v[i][j] = min(v[i][j - 1], v[i - 1][j]) + grid[i][j];
            }
        }
        return v[i - 1][j - 1];
    }
};