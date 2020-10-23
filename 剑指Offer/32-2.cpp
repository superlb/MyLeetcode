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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue< pair<TreeNode*,int> > q;
        q.push(make_pair(root,0));
        vector<vector<int>> v;
        while(!q.empty())
        {
            auto tmp = q.front();
            q.pop();
            if(tmp.first==NULL) continue;
            if(tmp.second==v.size()) v.push_back(vector<int>());
            v[tmp.second].push_back(tmp.first->val);
            q.push(make_pair(tmp.first->left,tmp.second+1));
            q.push(make_pair(tmp.first->right,tmp.second+1));
        }
        return v;
    }
};