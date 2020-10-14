class Solution
{
public:
    int movingCount(int m, int n, int k)
    {
        vector<vector<int>> v(m);
        for (auto &a : v)
            a.resize(n, 0);
        return dfs(0, 0, m, n, k, v);
    }
    int dfs(int i, int j, int m, int n, int k, vector<vector<int>> &status)
    {
        if (i == m || j == n || status[i][j] == 1 || (i % 10 + i / 10 + j % 10 + j / 10) > k)
            return 0;
        status[i][j] = 1;
        return dfs(i + 1, j, m, n, k, status) + dfs(i, j + 1, m, n, k, status) + 1;
    }
};