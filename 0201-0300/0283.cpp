/*
Date:2019年9月4日22:16:46
Time:20ms
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = nums.size();
        int tot = 0;
        for(int i=0;i<a;++i)
            if(nums[i])
                nums[tot++] = nums[i];
        for(int i=tot;i<a;++i)
            nums[i] = 0;
    }
};
