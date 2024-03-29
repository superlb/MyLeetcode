/*
Date: 2019年8月31日13:22:15
Time: 12ms
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vv;
        int len=nums.size();
        for(int i=0;i<len;++i)
        {
            vv.push_back(nums[i]);
        }
        sort(vv.begin(),vv.end());
        for(int i=0;i<len;++i)
        {
            auto q=lower_bound(vv.begin(),vv.end(),target-nums[i]);
            if(q==vv.end()) continue;
            if((*q)+nums[i]==target)
            {
                vector<int> re;
                re.push_back(i);
                int qwe=(*q);
                if(qwe==nums[i])
                {
                    for(int j=0;j<len;++j)
                    {
                        if(nums[j]==qwe && i!=j)
                        {
                            re.push_back(j);
                            return re;
                        }
                    }
                }
                else
                {
                    for(int j=0;j<len;++j)
                    {
                        if(nums[j]==qwe)
                        {
                            re.push_back(j);
                            return re;
                        }
                    }
                }
            }
        }
        return vv;
    }
};

/*
Date: 2021年7月20日21:48:14
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0;i<nums.size();++i) {
            if(m.find(target-nums[i]) != m.end()){
                return vector<int>{m[target-nums[i]],i};
            }
            m[nums[i]]=i;
        }
        return vector<int>{-1,-1};
    }
};