/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteNode(ListNode *head, int val)
    {
        if (head->val == val)
            return head->next;
        ListNode *cur = head->next, *h = head;
        while (cur != NULL && cur->val != val)
        {
            cur = cur->next;
            h = h->next;
        }
        h->next = cur->next;
        return head;
    }
};