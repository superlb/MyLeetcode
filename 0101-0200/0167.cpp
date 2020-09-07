class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        vector<int> v(nums);
        sort(v.begin(), v.end());
        return v[v.size() / 2];
    }
};