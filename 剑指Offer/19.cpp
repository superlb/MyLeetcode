class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<vector<bool>> f(n+1);
        for(auto &a : f)
            a.resize(m+1,false);
        for(int i=0;i<=n;++i)
        {
            for(int j=0;j<=m;++j)
            {
                if(j==0)
                {
                    f[i][j] = (i==0);
                }
                else
                {
                    if(p[j-1]!='*')
                    {
                        if(i>0&&(s[i-1]==p[j-1] || p[j-1]=='.'))
                        {
                            f[i][j] = f[i][j] || f[i-1][j-1];
                        }
                    }
                    else
                    {
                        if(j>=2)
                        {
                            f[i][j] = f[i][j] || f[i][j-2];
                        }
                        if(i>=1&&j>=2&&(s[i-1]==p[j-2] || p[j-2]=='.'))
                        {
                            f[i][j] = f[i][j] || f[i-1][j];
                        }
                    }
                }
            }
        }
        return f[n][m];
    }
};