class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxn=nums[0],minn=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            int maxnn=maxn,minnn=minn;
            maxn = max({nums[i],maxnn*nums[i],minnn*nums[i]});
            minn = min({nums[i],maxnn*nums[i],minnn*nums[i]});
            ans = max(maxn,ans);
        }
        return ans;
    }
};