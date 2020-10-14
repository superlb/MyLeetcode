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
    ListNode *removeDuplicateNodes(ListNode *head)
    {
        set<int> s;
        ListNode *l = new ListNode(0);
        ListNode *r = l;
        while (head != NULL)
        {
            if (s.find(head->val) == s.end())
            {
                s.insert(head->val);
                l->next = head;
                l = l->next;
            }
            head = head->next;
        }
        l->next = NULL;
        return r->next;
    }
};