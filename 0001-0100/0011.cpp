class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1,maxnum=0;
        while(left<right)
        {
            maxnum = max(maxnum,(right-left)*min(height[left],height[right]));
            if(height[left]>height[right]) --right;
            else ++left;
        }
        return maxnum;
    }
};