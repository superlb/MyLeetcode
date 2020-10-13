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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        bool b1=true,b2=true;
        ListNode* l1=headA,*l2 = headB;
        while(1)
        {
            if(l1==NULL&&b1)
            {
                l1=headB;
                b1=false;
            }
            if(l2==NULL&&b2)
            {
                l2=headA;
                b2=false;
            }
            if(l1==NULL||l2==NULL) break;
            if(l1==l2&&!b1&&!b2) return l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        return NULL;
    }
};