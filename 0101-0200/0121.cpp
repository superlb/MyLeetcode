class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() == 0)
            return 0;
        int ret = 0, minnum = prices[0];
        for (int i = 0; i < prices.size(); ++i)
        {
            ret = max(ret, prices[i] - minnum);
            minnum = min(minnum, prices[i]);
        }
        return ret;
    }
};