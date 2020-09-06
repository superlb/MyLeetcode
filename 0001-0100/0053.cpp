class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        int minsum = 0, sum = 0, ret = nums[0];
        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];
            ret = max(ret, sum - minsum);
            minsum = min(sum, minsum);
        }
        return ret;
    }
};