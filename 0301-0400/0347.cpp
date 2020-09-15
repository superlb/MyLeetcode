class Solution {
private:
    bool static cmp(const pair<int,int> &a,const pair<int,int> &b)
    {
        return a.second>b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        map<int,int> m;
        for(auto i : nums)
        {
            ++m[i];
        }
        vector< pair<int,int> > f;
        for(auto i:m)
        {
            f.push_back(i);
        }
        sort(f.begin(),f.end(),cmp);
        for(int i=0;i<k;++i)
        {
            v.push_back(f[i].first);
        }
        return v;
    }
};