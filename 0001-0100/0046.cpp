/*
Date: 2019年9月2日12:19:01
Time: 20ms
*/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> a = nums;
        sort(a.begin(),a.end());
        vector<vector<int>> sum;
        do
        {
            sum.push_back(a);
        }while (next_permutation(a.begin(),a.end()));
        return sum;
    }
};
