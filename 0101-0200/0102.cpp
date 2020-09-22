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
        vector<vector<int>> v;
        if(root==NULL) return v;
        q.push(make_pair(root,1));
        int nowi = 1;
        vector<int> tmpv;
        while(!q.empty())
        {
            pair<TreeNode*,int> tmp = q.front();
            q.pop();
            if(tmp.second != nowi)
            {
                v.push_back(tmpv);
                tmpv.clear();
                ++nowi;
            }
            tmpv.push_back((tmp.first)->val);
            if((tmp.first)->left != NULL)
                q.push(make_pair((tmp.first)->left,tmp.second+1));
            if((tmp.first)->right != NULL)
                q.push(make_pair((tmp.first)->right,tmp.second+1));
        }
        if(!tmpv.empty())
            v.push_back(tmpv);
        return v;
    }
};