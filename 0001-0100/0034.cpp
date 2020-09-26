class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it1=lower_bound(nums.begin(),nums.end(),target);
        auto it2=upper_bound(nums.begin(),nums.end(),target);
        vector<int> v;
        if(it1==nums.end() || *it1 != target)
        {
            v.push_back(-1);
            v.push_back(-1);
        }
        else
        {
            v.push_back(it1-nums.begin());
            v.push_back(it2-nums.begin()-1);
        }
        return v;
    }
};