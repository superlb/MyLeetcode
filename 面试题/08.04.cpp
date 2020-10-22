class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        res.push_back(vector<int>());
        for(auto n:nums)
        {
            int len = res.size();
            for(int i=0;i<len;++i)
            {
                auto v = res[i];
                v.push_back(n);
                res.push_back(v);
            }
        }
        return res;
    }
};