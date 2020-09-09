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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        dfs(root);
        return maxnum;
    }
private:
    int maxnum = 0;
    int dfs(TreeNode* root)
    {
        if(root->left==NULL&&root->right==NULL)
            return 0;
        int leftlen = root->left==NULL?0:dfs(root->left)+1;
        int rightlen = root->right==NULL?0:dfs(root->right)+1;
        maxnum = max(maxnum,leftlen+rightlen);
        return max(leftlen,rightlen);
    }
};