class Solution
{
public:
    vector<int> exchange(vector<int> &nums)
    {
        partition(nums.begin(), nums.end(), [](int &n) { return n & 1; });
        return nums;
    }
};