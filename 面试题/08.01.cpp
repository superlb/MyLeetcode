class Solution {
public:
    int waysToStep(int n) {
        int a[4] = {0,1,2,4};
        for(int i=4;i<=n;++i)
        {
            a[i%4] = ((a[(i+1)%4] + a[(i+2)%4]) % 1000000007 + a[(i+3)%4]) % 1000000007;
        }
        return a[n%4];
    }
};