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
    ListNode* merge(ListNode* l1, ListNode* l2){
        if (!l1->next){
            l1->next = l2;
            return l1;
        }
        ListNode* current1 = l1, *next1 = l1->next;
        ListNode* current2 = l2, *next2 = l2->next;
        while(next1 && current2){
            if ((current2->val >= current1->val) && (current2->val <= next1->val)){
                next2 = current2->next;
                current1->next = current2;
                current2->next = next1;
                
                current1 = current2;
                current2 = next2;
            }
            else{
                if (next1->next){
                    next1 = next1->next;
                    current1 = current1->next;
                }
                else{
                    next1->next = current2;
                    return l1;
                }
            }
        }
        return l1;
    }
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL)
            return l2;
        else if (l2 == NULL)
            return l1;
        if (l1->val < l2->val)
            return merge(l1,l2);
        else 
            return merge(l2,l1);
    }
};