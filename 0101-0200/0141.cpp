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
    bool hasCycle(ListNode *head)
    {
        ListNode *q1 = head, *q2 = head;
        while (1)
        {
            if (q1 == NULL || q2 == NULL || q2->next == NULL)
                return false;
            q1 = q1->next;
            q2 = q2->next->next;
            if (q1 == q2)
                return true;
        }
    }
};