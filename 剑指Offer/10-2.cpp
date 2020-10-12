class Solution {
public:
    int numWays(int n) {
        //矩阵快速幂是最快的，此处n较小不需要
        int f[3]={1,1,2};
        for(int i=3;i<=n;++i)
        {
            f[i%3] = (f[(i+1)%3] + f[(i+2)%3]) % 1000000007;
        }
        return f[n%3];
    }
};