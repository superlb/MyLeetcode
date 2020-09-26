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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0)  return NULL;
        return solve(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int l1,int r1,int l2,int r2)
    {
        int root = preorder[l1];
        TreeNode* r = new TreeNode(root);
        int i;
        for(i=l2;i<=r2;++i)
        {
            if(inorder[i]==root) break;
        }
        int leftsize = i - l2;
        int rightsize = r2 - i;
        if(leftsize>0)
        {
            r->left = solve(preorder,inorder,l1+1,l1+leftsize,l2,i-1);
        }
        if(rightsize>0)
        {
            r->right = solve(preorder,inorder,r1-rightsize+1,r1,i+1,r2);
        }
        return r;
    }
};