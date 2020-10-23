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
    vector<int> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<int> v;
        while(!q.empty())
        {
            auto tmp = q.front();
            q.pop();
            if(tmp==NULL) continue;
            v.push_back(tmp->val);
            q.push(tmp->left);
            q.push(tmp->right);
        }
        return v;
    }
};