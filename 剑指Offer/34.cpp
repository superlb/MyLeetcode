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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> v;
        solve(v,vector<int>(),root,sum);
        return v;
    }
    void solve(vector<vector<int>> &v,vector<int> vv,TreeNode* root,int sum)
    {
        if(root==NULL) return;
        sum-=root->val;
        vv.push_back(root->val);
        if(sum==0&&root->left==NULL&&root->right==NULL)
        {
            v.push_back(vv);
            return;
        }
        solve(v,vv,root->left,sum);
        solve(v,vv,root->right,sum);
    }
};