/*
Date: 2019年9月2日12:12:14
Time: 0ms
*/

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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return NULL;
        TreeNode* tmp = root->right;
        if(root->left != NULL) root->right = invertTree(root->left);
        else root->right = NULL;
        if(tmp != NULL) root->left = invertTree(tmp);
        else root->left = NULL;
        return root;
    }
};
