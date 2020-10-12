class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        set<int> s;
        for(auto a : nums)
        {
            if(s.find(a)!=s.end())
            {
                return a;
            }
            else
            {
                s.insert(a);
            }
        }
        return 0;
    }
};