class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> res;
        for(int i=0;i<n;++i)
        {
            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }
            for(int j=i+1;j<n;++j)
            {
                if(j>i+1&&nums[j]==nums[j-1])
                {
                    continue;
                }
                int target = 0-nums[i]-nums[j];
                auto it = lower_bound(nums.begin()+j+1,nums.end(),target);
                if(it==nums.end())
                {
                    continue;
                }
                if((it-nums.begin()-j)<=0)
                {
                    break;
                }
                if(*it==target)
                {
                    res.push_back({nums[i],nums[j],*it});
                }
            }
        }
        return res;
    }
};