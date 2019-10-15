/*
Date:2019年10月13日19:35:23
Time:12ms
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = nums[0],j = nums[0];
        do
        {
            i=nums[i];
            j=nums[nums[j]];
        }while(i!=j);
        j=nums[0];
        while(i!=j)
        {
            i=nums[i];
            j=nums[j];
        }
        return i;
    }
};
