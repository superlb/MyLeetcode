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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode root(0);
        ListNode *l = &root;
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val > l2->val)
            {
                l->next = l2;
                l = l->next;
                l2 = l2->next;
            }
            else
            {
                l->next = l1;
                l = l->next;
                l1 = l1->next;
            }
        }
        while (l1 != NULL)
        {
            l->next = l1;
            l = l->next;
            l1 = l1->next;
        }
        while (l2 != NULL)
        {
            l->next = l2;
            l = l->next;
            l2 = l2->next;
        }
        return root.next;
    }
};