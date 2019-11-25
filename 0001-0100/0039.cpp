class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> vv;
        func(v,candidates,target,vv);
        return v;
    }
    void func(vector<vector<int>> &v,vector<int>& candidates,int target,vector<int> vv)
    {
        if(target==0)
        {
            sort(vv.begin(),vv.end());
            if(find(v.begin(),v.end(),vv)==v.end())
                v.push_back(vv);
            return;
        }
        for(auto i : candidates)
        {
            if(i<=target)
            {
                vector<int> vvv=vv;
                vvv.push_back(i);
                func(v,candidates,target-i,vvv);
            }
        }
    }
};
