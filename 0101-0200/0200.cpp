class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int sum = 0;
        for(int i=0;i<grid.size();++i)
        {
            for(int j=0;j<grid[0].size();++j)
            {
                if(grid[i][j]=='1')
                {
                    dfs(i,j,grid);
                    ++sum;
                }
            }
        }
        return sum;
    }
    void dfs(int i,int j,vector<vector<char>>& grid)
    {
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()) return;
        if(grid[i][j]=='1')
        {
            grid[i][j] = '0';
            dfs(i+1,j,grid);
            dfs(i-1,j,grid);
            dfs(i,j+1,grid);
            dfs(i,j-1,grid);
        }
    }
};