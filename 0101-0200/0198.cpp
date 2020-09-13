class Solution
{
public:
    int rob(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return nums[0];
        if (nums.size() == 2)
            return max(nums[0], nums[1]);
        int a[101];
        a[0] = nums[0];
        a[1] = nums[1];
        a[2] = max(a[1], a[0] + nums[2]);
        int maxnum = max(nums[0], nums[1]);
        for (int i = 3; i < nums.size(); ++i)
        {
            a[i] = max(maxnum + nums[i], nums[i - 1]);
            maxnum = max(maxnum, a[i - 1]);
        }
        return max(maxnum, a[nums.size() - 1]);
    }
};