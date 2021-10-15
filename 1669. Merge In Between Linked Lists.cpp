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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* first = list1;
        ListNode* second = list2;
        for(int i=1;i<a;i++)
            first = first->next;
        ListNode* temp = first->next;
        first->next = second;
        for(int i=0;i<b-a;i++)
            temp = temp->next;
        while(first->next!=NULL)
            first = first->next;
        first->next = temp->next;
        return list1;
    }
};
