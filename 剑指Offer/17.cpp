class Solution
{
public:
    vector<int> printNumbers(int n)
    {
        int sum = 1;
        vector<int> v;
        while (n--)
        {
            sum *= 10;
        }
        for (int i = 1; i < sum; ++i)
        {
            v.push_back(i);
        }
        return v;
    }
};