class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int left = 0,right = nums.size() - 1;
        while(left<right)
        {
            int mid = (left+right)/2;
            if(nums[mid]==mid)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        return left==nums[nums.size()-1]?left+1:left;
    }
};