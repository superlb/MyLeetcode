class Solution {
public:
    int uniquePaths(int m, int n) {
        vector< vector<int> > v(m+1);
        for(int i = 0;i<v.size();++i)
        {
            v[i].resize(n+1);
        }
        v[0][1]=1;
        for(int i = 1;i<=m;++i)
        {
            for(int j = 1;j<=n;++j)
            {
                v[i][j] = v[i-1][j] + v[i][j-1];
            }
        }
        return v[m][n];
    }
};