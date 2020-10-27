class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        int r=0,minnum = prices[0];
        for(int i=1;i<prices.size();++i)
        {
            r = max(r,prices[i]-minnum);
            minnum = min(minnum,prices[i]);
        }
        return r;
    }
};