/*
Date:2019年9月4日22:18:34
Time:200ms
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
