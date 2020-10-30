class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right = nums.size()-1;
        while(left<right)
        {
            int mid = (left+right)/2;
            if(nums[mid]>nums[right])
            {
                left = mid+1;
            }
            else
            {
                right = mid;
            }
        }
        vector<int>::iterator it;
        if(target > *nums.rbegin())
        {
            it = lower_bound(nums.begin(),nums.begin()+left,target);
        }
        else
        {
            it = lower_bound(nums.begin()+left,nums.end(),target);
        }
        if(it!=nums.end()&&*it==target)
        {
            return it-nums.begin();
        }
        else
        {
            return -1;
        }
    }
};