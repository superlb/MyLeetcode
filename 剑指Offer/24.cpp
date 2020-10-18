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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *last = NULL, *tmp;
        while (head != NULL)
        {
            tmp = head->next;
            head->next = last;
            last = head;
            head = tmp;
        }
        return last;
    }
};