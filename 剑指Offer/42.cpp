class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int maxnum=nums[0],minnum=nums[0],sum=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            sum+=nums[i];
            maxnum = max({maxnum,sum-minnum,sum});
            minnum = min(minnum,sum);
        }
        return maxnum;
    }
};