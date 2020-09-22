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
    ListNode* sortList(ListNode* head) {
        ListNode rp(0);
        rp.next = head;
        ListNode* p = head;
        int n = 0;
        while(p!=nullptr)
        {
            ++n;
            p = p->next;
        }
        for(int i = 1;i<n;i<<=1)
        {
            ListNode* cur = rp.next;
            ListNode* tail = &rp;
            while(cur!=nullptr)
            {
                ListNode* left = cur;
                ListNode* right = cut(left,i);
                cur = cut(right,i);
                tail->next = merge(left,right);
                while(tail->next!=nullptr)
                {
                    tail = tail->next;
                }
            }
        }
        return rp.next;
    }
    ListNode* cut(ListNode* head,int n)
    {
        ListNode* p = head;
        while(--n && p!=nullptr)
            p=p->next;
        if(p==nullptr) 
            return nullptr;
        ListNode* nextp = p->next;
        p->next = nullptr;
        return nextp;
    }
    ListNode* merge(ListNode* l1,ListNode* l2)
    {
        ListNode rp(0);
        ListNode* p=&rp;
        while(l1!=nullptr && l2!=nullptr)
        {
            if(l1->val < l2->val)
            {
                p->next = l1;
                p = l1;
                l1 = l1->next;
            }
            else
            {
                p->next = l2;
                p = l2;
                l2 = l2->next;
            }
        }
        p->next = l1!=nullptr?l1:l2;
        return rp.next;
    }
};