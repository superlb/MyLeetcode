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
    ListNode *getKthFromEnd(ListNode *head, int k)
    {
        ListNode *l1 = head, *l2 = head;
        while (k--)
        {
            l1 = l1->next;
        }
        while (l1 != NULL)
        {
            l1 = l1->next;
            l2 = l2->next;
        }
        return l2;
    }
};