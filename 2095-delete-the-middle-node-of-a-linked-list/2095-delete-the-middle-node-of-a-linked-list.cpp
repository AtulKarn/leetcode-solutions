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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if (head==slow)
            return NULL;
        if (slow->next == NULL){
            head->next = NULL;
            return head;
        }
        int temp = slow->val;
        slow->val = slow->next->val;
        slow->next->val = temp;
        ListNode* todelete = slow->next;
        slow->next = todelete->next;
        delete(todelete);
        return head;
    }
};