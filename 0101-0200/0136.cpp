/*
Date:2019年9月3日17:47:11
Time:16ms
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for(auto it = nums.begin();it!=nums.end();++it)
            a ^= (*it);
        return a;
    }
};
