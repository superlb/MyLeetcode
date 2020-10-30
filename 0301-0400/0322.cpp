class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0) return 0;
        vector<int> v(amount+1,0);
        for(int i=0;i<=amount;++i)
        {
            for(auto a:coins)
            {
                if(a<=i&&(i==a || v[i-a]!=0))
                {
                    if(v[i]==0)
                    {
                        v[i] = v[i-a] + 1;
                    }
                    else
                    {
                        v[i] = min(v[i],v[i-a]+1);
                    }
                }
            }
        }
        return v[amount]==0?-1:v[amount];
    }
};