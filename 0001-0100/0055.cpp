class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxnum=nums[0];
        for(int i=0;i<nums.size();++i)
        {
            if(i>maxnum)return false;
            if(maxnum>nums.size())return true;
            maxnum = max(maxnum,i+nums[i]);
        }
        return true;
    }
};