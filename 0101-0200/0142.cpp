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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head,*low=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast = fast->next->next;
            low = low->next;
            if(fast==low)
            {
                fast = head;
                while(fast!=low)
                {
                    fast = fast->next;
                    low = low->next;
                }
                return fast;
            }
        }
        return NULL;
    }
};