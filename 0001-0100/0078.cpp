/*
Date:2019年9月4日22:11:34
Time:20ms
*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sum;
        int a = 1 << nums.size();
        for(int i = 0;i<a;++i)
        {
            vector<int> b;
            for(int j = 0;j<nums.size();++j)
            {
                if(i & (1 << j))
                    b.push_back(nums[j]);
            }
            sum.push_back(b);
        }
        return sum;
    }
};
