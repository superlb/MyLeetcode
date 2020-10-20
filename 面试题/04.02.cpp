/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums,0,nums.size());
    }
    TreeNode* solve(vector<int> &nums,int left,int right)
    {
        if(left==right) return NULL;
        int mid = (left+right)/2;
        TreeNode* t = new TreeNode(nums[mid]);
        t->left = solve(nums,left,mid);
        t->right = solve(nums,mid+1,right);
        return t;
    }
};