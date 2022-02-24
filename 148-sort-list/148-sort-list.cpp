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
    ListNode* sortList(ListNode* head) {
        if (!head)
            return NULL;
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        sort(v.begin(), v.end());
        ListNode* temp = new ListNode(v[0]);
        head = temp;
        for(int i=1;i<v.size();i++){
            ListNode* node = new ListNode(v[i]);
            temp->next = node;
            temp = node;
        }
        return head;
    }
};