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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // ListNode* a=headA;
        // ListNode* b;
        // while(a!=NULL){
        //     b=headB;
        //     while(b!=NULL){
        //         if (a==b)
        //             return a;
        //         b = b->next;
        //     }
        //     a = a->next;
        // }
        // return NULL;
        
        ListNode* a = headA;
        ListNode* b = headB;
        while(a!=b){
            if (a==NULL) a = headB;
            else if (b==NULL) b = headA;
            else{
                a = a->next;
                b = b->next;
            }
        }
        return a;
    }
};
