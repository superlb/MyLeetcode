class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto p = equal_range(nums.begin(),nums.end(),target);
        return p.second-p.first;
    }
};