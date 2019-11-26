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
    ListNode* reverseList(ListNode* head) {
        ListNode* h = NULL;
        while(head!=NULL)
        {
            ListNode* tmp = head->next;
            head->next = h;
            h = head;
            head = tmp;
        }
        return h;
    }

};
