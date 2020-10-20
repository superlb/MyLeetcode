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
    ListNode* partition(ListNode* head, int x) {
        ListNode small,big;
        ListNode *cur=head,*smallcur = &small,*bigcur = &big;
        while(cur!=NULL)
        {
            if(cur->val < x)
            {
                smallcur->next = cur;
                smallcur=smallcur->next;
            }
            else
            {
                bigcur->next = cur;
                bigcur = bigcur->next;
            }
            cur = cur->next;
        }
        smallcur->next = big.next;
        bigcur->next = NULL;
        return small.next;
    }
};