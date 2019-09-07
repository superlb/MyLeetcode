/*
Date:2019年9月5日12:31:49
Time:12ms
*/

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
    int maxDepth(TreeNode* root) {
        queue<TreeNode> a;
        queue<int> b;
        if(root != NULL)
        {
            a.push(*root);
            b.push(1);
        }
        int maxnum = 0;
        while(!a.empty())
        {
            TreeNode tmp = a.front();a.pop();
            int q = b.front();b.pop();
            maxnum = max(maxnum,q);
            if(tmp.left != NULL)
            {
                a.push(*tmp.left);
                b.push(q+1);
            }
            if(tmp.right != NULL)
            {
                a.push(*tmp.right);
                b.push(q+1);
            }
        }
        return maxnum;
    }
};
