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
        ListNode* r = new ListNode(0);
        ListNode* l = r;
        int jin=0;
        while(l1!=NULL || l2!=NULL || jin!=0)
        {
            int num1 = l1!=NULL?l1->val:0;
            int num2 = l2!=NULL?l2->val:0;
            int sum = num1+num2+jin;
            jin = sum/10;
            l->next = new ListNode(sum%10);
            l=l->next;
            if(l1!=NULL)l1=l1->next;
            if(l2!=NULL)l2=l2->next;
        }
        l = r->next;
        delete r;
        return l;
    }
};