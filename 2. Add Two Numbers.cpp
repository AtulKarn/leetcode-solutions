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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int temp, carry=0;
        ListNode* ans;
        ListNode* ll1=l1;
        ListNode* ll2=l2;
        while(ll1->next!=NULL && ll2->next!=NULL){
            temp = ll1->val+ll2->val+carry;
            ll1->val = temp%10;
            carry = temp/10;
            ll1=ll1->next;
            ll2 = ll2->next;
        }
        temp = ll1->val+carry+ll2->val;
        ll1->val = temp%10;
        carry = temp/10;
        if (ll1->next==NULL && ll2->next==NULL && carry){
            ll1->next = new ListNode(carry);
            return l1;
        }
        if (ll1->next==NULL && ll2->next!=NULL){
            ll1->next = ll2->next;
            ll1 = ll1->next;
        }
        else
            ll1 = ll1->next;
        if (ll1==NULL){
            return l1;
        }
        while(ll1->next!=NULL && carry!=0){
            temp = ll1->val+carry;
            ll1->val = temp%10;
            carry = temp/10;
            ll1 = ll1->next;
        }
        if (carry!=0){
            temp = ll1->val+carry;
            ll1->val = temp%10;
            carry = temp/10;
            if (carry){
                ll1->next = new ListNode(carry);
            }
        }
        return l1;
    }
};
