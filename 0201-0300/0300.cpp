class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> a(nums);
        const int INF = 1<<30;
        vector<int> dp(a.size(),INF);
        int maxnum = 0;
        for(int i=0;i<a.size();++i)
        {
            *lower_bound(dp.begin(),dp.end(),a[i]) = a[i];
            a[i] = lower_bound(dp.begin(),dp.end(),INF) - dp.begin();
            maxnum = max(maxnum,a[i]);
        }
        return maxnum;
    }
};