/*
Date: 2019年9月2日11:42:16
Time: 92ms
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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1 != NULL && t2 != NULL)
        {
            if(t1->left != NULL || t2->left != NULL)
                t1->left = mergeTrees(t1->left,t2->left);
            if(t1->right != NULL || t2->right != NULL)
                t1->right = mergeTrees(t1->right,t2->right);
            t1->val += t2->val;
            return t1;
        }
        else
        {
            if(t1 == NULL)
            {
                return t2;
            }
            else
            {
                return t1;
            }
        }
    }
};
