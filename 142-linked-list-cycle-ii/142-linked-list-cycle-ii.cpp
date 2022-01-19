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
        if (head==NULL)
            return head;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* begin = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow){
                while(begin!=slow){
                    begin = begin->next;
                    slow = slow->next;
                }
                return begin;
            }
        }
        return NULL;
    }
};