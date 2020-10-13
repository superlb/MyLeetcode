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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head = head->next;
        }
        int len = v.size();
        for(int i=0;i<len/2;++i)
        {
            if(v[i]!=v[len-1-i]) return false;
        }
        return true;
    }
};