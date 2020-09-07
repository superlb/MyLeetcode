class Solution
{
public:
    int climbStairs(int n)
    {
        int a[3];
        a[1] = 1;
        a[2] = 2;
        for (int i = 3; i <= n; ++i)
        {
            a[(i + 3) % 3] = a[(i + 4) % 3] + a[(i + 5) % 3];
        }
        return a[n % 3];
    }
};