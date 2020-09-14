class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        vector<int> v(nums);
        sort(v.begin(), v.end());
        return v[v.size() - k];
    }
};