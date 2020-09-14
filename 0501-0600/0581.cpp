class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int maxnum = nums[0],minnum = nums[nums.size()-1];
        int high=0,low=0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]<maxnum)
                high=i;
            maxnum=max(maxnum,nums[i]);
        }
        for(int i=nums.size()-1;i>=0;--i)
        {
            if(nums[i]>minnum)
                low=i;
            minnum=min(minnum,nums[i]);
        }
        return high==low?0:high-low+1;
    }
};