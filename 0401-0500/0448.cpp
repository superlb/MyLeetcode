/*
Date:2019年9月3日17:55:39
Time:128ms
*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> a(nums.size()+1,0);
        for(auto it = nums.begin();it != nums.end();++it)
            a[(*it)] = 1;
        vector<int> b;
        for(int i=1;i<a.size();++i)
            if(a[i]==0)
                b.push_back(i);
        return b;
    }
};
