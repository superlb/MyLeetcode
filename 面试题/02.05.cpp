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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode head(0);
        ListNode* l = &head;
        int last = 0;
        int sum;
        while(l1!=NULL && l2!=NULL)
        {
            sum = l1->val + l2->val + last;
            last = sum/10;
            l->next = new ListNode(sum%10);
            l = l->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL)
        {
            sum = l1->val + last;
            last = sum/10;
            l->next = new ListNode(sum%10);
            l = l->next;
            l1 = l1->next;
        }
        while(l2!=NULL)
        {
            sum = l2->val + last;
            last = sum/10;
            l->next = new ListNode(sum%10);
            l = l->next;
            l2 = l2->next;
        }
        if(last!=0)
        {
            l->next = new ListNode(last);
        }
        return head.next;
    }
};