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
        if (l1 != NULL && l2 == NULL)
            return l1;
        if (l1 == NULL && l2 != NULL)
            return l2;
        if (l1 == NULL && l2 == NULL)
            return NULL;
        ListNode *q1 = l1, *q2 = l2, *ret, *ret2;
        if (q1->val < q2->val)
        {
            ret = q1;
            q1 = q1->next;
        }
        else
        {
            ret = q2;
            q2 = q2->next;
        }
        ret2 = ret;
        while (q1 != NULL && q2 != NULL)
        {
            if (q1->val < q2->val)
            {
                ret->next = q1;
                q1 = q1->next;
                ret = ret->next;
            }
            else
            {
                ret->next = q2;
                q2 = q2->next;
                ret = ret->next;
            }
        }
        if (q1 != NULL)
        {
            ret->next = q1;
        }
        else
        {
            ret->next = q2;
        }
        return ret2;
    }
};