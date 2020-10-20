/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> listOfDepth(TreeNode* tree) {
        vector<ListNode*> v;
        dfs(v,tree,0);
        return v;
    }
    void dfs(vector<ListNode*> &v,TreeNode* tree,int floor)
    {
        if(tree==NULL) return;
        ListNode* tmp = new ListNode(tree->val);
        if(v.size()==floor)
        {
            v.push_back(tmp);
        }
        else
        {
            ListNode* head = v[floor];
            while(head->next!=NULL)
            {
                head = head->next;
            }
            head->next = tmp;
        }
        dfs(v,tree->left,floor+1);
        dfs(v,tree->right,floor+1);
    }
};