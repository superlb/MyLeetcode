class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int left = 0,right = height.size()-1;
        int left_max = 0,right_max = 0;
        while(left <= right)
        {
            if(left_max<right_max)
            {
                left_max = max(left_max,height[left]);
                ans += left_max - height[left++];
            }
            else
            {
                right_max = max(right_max,height[right]);
                ans += right_max - height[right--];
            }
        }
        return ans;
    }
};