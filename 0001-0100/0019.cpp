/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* l1=head,*l2=head,*l3=nullptr;
        while(n--)
            l1=l1->next;
        while(l1!=nullptr)
        {
            l1 = l1->next;
            l3 = l2;
            l2 = l2->next;
        }
        if(l3==nullptr)
        {
            l3 = head->next;
            delete head;
            return l3;
        }
        else
        {
            l3->next = l2->next;
            delete l2;
            return head;
        }
    }
};