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
    vector<int> v;
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        dfs(root);
        for(int i=0;i<v.size()-1;++i)
        {
            if(v[i+1]<=v[i])
                return false;
        }
        return true;
    }
    void dfs(TreeNode* root)
    {
        if(root==NULL) return;
        dfs(root->left);
        v.emplace_back(root->val);
        dfs(root->right);
    }
};