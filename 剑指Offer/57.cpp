class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(auto a:nums)
        {
            auto it = lower_bound(nums.begin(),nums.end(),target-a);
            if(it!=nums.end()&&a+(*it)==target && a!=(*it))
            {
                vector<int> v;
                v.push_back(a);
                v.push_back(*it);
                return v;
            }
        }
        return vector<int>();
    }
};