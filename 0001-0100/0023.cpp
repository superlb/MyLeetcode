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
    struct ss
    {
        int val;
        ListNode* l;
        bool operator<(const ss& tmp) const
        {
            return val>tmp.val;
        }
        ss(int _val,ListNode* _l):val(_val),l(_l){}
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ss> pq;
        for(auto a:lists)
        {
            if(a!=NULL)
            {
                pq.push(ss(a->val,a));
            }
        }
        ListNode ln;
        ListNode* head = &ln;
        while(!pq.empty())
        {
            auto it = pq.top();
            pq.pop();
            head->next = it.l;
            head = head->next;
            if(head->next != NULL)
            {
                pq.push(ss(head->next->val,head->next));
            }
        }
        return ln.next;
    }
};