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
    bool isBalanced(TreeNode* root) {
        bool is=true;
        dfs(is,root);
        return is;
    }
    int dfs(bool &is,TreeNode* root)
    {
        if(root==NULL) return 0;
        int left=dfs(is,root->left);
        int right=dfs(is,root->right);
        if(abs(left-right)>1)
            is=false;
        return max(left,right) + 1;
    }
};