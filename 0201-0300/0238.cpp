/*
Date: 2019年9月18日15:28:31
Time: 120ms
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> a(len+1), b(len+1);
        a[0]=1;b[len]=1;
        for(int i=1;i<=len;++i)
        {
            a[i] = a[i-1] * nums[i-1];
            b[len-i] = b[len - i + 1] * nums[len - i];
        }
        vector<int> output(len);
        for(int i=0;i<len;++i)
        {
            output[i] = a[i]*b[i+1];
        }
        return output;
    }
};
