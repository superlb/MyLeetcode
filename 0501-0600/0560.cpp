class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        multiset<int> s;
        s.insert(0);
        int sum=0;
        int res=0;
        for(auto a:nums)
        {
            sum+=a;
            res+=s.count(sum-k);
            s.insert(sum);
        }
        return res;
    }
};