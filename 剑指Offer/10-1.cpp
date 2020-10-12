class Solution {
public:
    int fib(int n) {
        //矩阵快速幂是最快的，此处n较小不需要
        int f[3]={0,1,0};
        for(int i=2;i<=n;++i)
        {
            f[i%3] = (f[(i+1)%3] + f[(i+2)%3]) % 1000000007;
        }
        return f[n%3];
    }
};