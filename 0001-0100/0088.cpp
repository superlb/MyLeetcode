/*
Date:2019年10月13日19:17:29
Time:8ms
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        int i=0,j=0;
        while(i!=m && j!=n)
        {
            if(nums1[i] > nums2[j])
                nums3.push_back(nums2[j++]);
            else
                nums3.push_back(nums1[i++]);
        }
        while(i!=m)
            nums3.push_back(nums1[i++]);
        while(j!=n)
            nums3.push_back(nums2[j++]);
        for(int q=0;q<m+n;++q)
            nums1[q]=nums3[q];
    }
};
