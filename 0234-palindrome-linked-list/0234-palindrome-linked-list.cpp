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
private:
    ListNode* middlenext(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        if (head->next == NULL)
            return head;
        ListNode* temp = head->next;
        ListNode* temp2;
        head->next = NULL;
        while(temp!=NULL){
            temp2 = temp->next;
            temp->next = head;
            head = temp;
            temp = temp2;
        }
        return head;
    }
public:
    
    bool isPalindrome(ListNode* head) {
        if (head->next == NULL)
            return true;
        ListNode* mid = middlenext(head);
        ListNode* rev = reverse(mid);
        while(rev!=NULL){
            if (rev->val!=head->val)
                return false;
            rev = rev->next;
            head = head->next;
        }
        return true;
    }
};