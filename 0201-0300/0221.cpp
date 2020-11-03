class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int res=0;
        vector<int> s1(matrix[0].size(),0),s2(matrix[0].size(),0);
        for(int i=0;i<matrix.size();++i)
        {
            for(int j=0;j<matrix[0].size();++j)
            {
                if(matrix[i][j]=='0')
                {
                    s2[j]=0;
                }
                else
                {
                    if(j==0)
                    {
                        s2[j] = 1;
                    }
                    else
                    {
                        s2[j] = min({s2[j-1],s1[j],s1[j-1]}) + 1;
                    }
                }
                res = max(res,s2[j]);
            }
            s1 = s2;
            for(auto &a:s2)
                a=0;
        }
        return res*res;
    }
};