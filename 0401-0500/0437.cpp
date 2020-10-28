/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL) return 0;
        return dfs(root,sum)+pathSum(root->left,sum)+pathSum(root->right,sum);
    }
    int dfs(TreeNode* root,int sum)
    {
        if(root==NULL) return 0;
        sum -= root->val;
        return dfs(root->left,sum) + dfs(root->right,sum) + (sum==0?1:0);
    }
};