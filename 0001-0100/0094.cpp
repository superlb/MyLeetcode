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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        func(v,root);
        return v;
    }
    void func(vector<int> &v,TreeNode* root)
    {
        if(root==NULL) return;
        func(v,root->left);
        v.push_back(root->val);
        func(v,root->right);
    }
};
