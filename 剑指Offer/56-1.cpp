class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int x = 0;
        for(auto a:nums)
        {
            x ^= a;
        }
        int x1=0,x2=0,q=x&(-x);
        for(auto a:nums)
        {
            if(a&q)
            {
                x1 ^= a;
            }
            else
            {
                x2 ^= a;
            }
        }
        vector<int> v;
        v.emplace_back(x1);
        v.emplace_back(x2);
        return v;
    }
};