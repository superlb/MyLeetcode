class Solution {
public:
    bool isStraight(vector<int>& nums) {
        set<int> s;
        for(auto a : nums)
        {
            if(a==0) continue;
            if(s.find(a)!=s.end()) return false;
            s.insert(a);
        }
        return (*s.rbegin()) - (*s.begin()) < 5;
    }
};