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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL)
            return l2;
        else if (l2 == NULL)
            return l1;
        
        //recursive approach
        
        // if (l1->val <= l2->val){
        //     l1->next = mergeTwoLists(l1->next, l2);
        //     return l1;
        // }
        // else{
        //     l2->next = mergeTwoLists(l1, l2->next);
        //     return l2;
        // }
        
        
        //iterative
        
        ListNode* head=l1;
        if (l1->val <= l2->val){
            l1 = l1->next;       
        }
        else{
            head = l2;
            l2 = l2->next;
        }
        ListNode* current = head;
        while(l1 && l2){
            if (l1->val <= l2->val){
                current->next = l1;
                l1 = l1->next;
            }
            else{
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }
        if (!l1) current->next = l2;
        else current->next = l1;
        return head;
    }
};