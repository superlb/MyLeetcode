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
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL) return 0;
        int res = 0;
        dfs(root,sum,res);
        return pathSum(root->left,sum)+pathSum(root->right,sum)+res;
    }
    void dfs(TreeNode* root,int sum,int &res)
    {
        if(root==NULL) return;
        sum-=root->val;
        if(sum==0) ++res;
        dfs(root->left,sum,res);
        dfs(root->right,sum,res);
    }
};