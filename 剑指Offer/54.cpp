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
    int kthLargest(TreeNode* root, int k) {
        vector<int> v;
        dfs(root,v);
        return v[v.size()-k];
    }
    void dfs(TreeNode* root,vector<int> &v)
    {
        if(root==NULL) return ;
        dfs(root->left,v);
        v.push_back(root->val);
        dfs(root->right,v);
    }
};