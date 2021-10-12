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
        if (head==NULL)
            return head;
        if (head->next==NULL)
            return NULL;
        ListNode* first = head;
        ListNode* second = head;
        int i;
        for(i=0;i<n+1 && first!=NULL;i++){
            first = first->next;
        }
        if (i==n && first==NULL)
            return head->next;
        while (first!=NULL){
            second = second->next;
            first = first->next;
        }
        second->next = second->next->next;    
        return head;
    }
};
