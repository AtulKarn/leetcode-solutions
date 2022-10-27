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
    ListNode* removeElements(ListNode* head, int val) {
        if  (head==NULL)
            return head;
        while(head!=NULL && head->val == val){
            head = head->next;
        }
        ListNode* h = head;
        while(h!=NULL){
            while (h->next != NULL && h->next->val == val){
                h->next = h->next->next;
            }
            h = h->next;
        }
        return head;
    }
};