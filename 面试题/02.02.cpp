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
    int kthToLast(ListNode* head, int k) {
        auto q = head;
        while(--k) q = q->next;
        while(q->next!=NULL)
        {
            q=q->next;
            head=head->next;
        }
        return head->val;
    }
};