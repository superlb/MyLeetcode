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
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        vector<int> v;
        dfs(v,root);
        for(int i=0;i<v.size()-1;++i)
        {
            if(v[i]>=v[i+1]) return false;
        }
        return true;
    }
    void dfs(vector<int> &v,TreeNode* root)
    {
        if(root==NULL) return;
        dfs(v,root->left);
        v.push_back(root->val);
        dfs(v,root->right);
    }
};