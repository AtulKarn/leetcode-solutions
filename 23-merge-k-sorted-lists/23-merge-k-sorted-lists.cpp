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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size()==0)
            return NULL;
        while(lists.size()>1){
            int left=0, right=lists.size()-1;
            while(left<right){
                ListNode* merged = merge(lists[left], lists[right]);
                lists[left] = merged;
                left++;
                right--;
                lists.pop_back();
            }
        }
        return lists[0];
    }
private:
    ListNode* merge(ListNode* a, ListNode* b){
        if (a==NULL)
            return b;
        if (b==NULL)
            return a;
        if (a->val<=b->val){
            a->next = merge(a->next, b);
            return a;
        }
        else{
            b->next = merge(a, b->next);
            return b;
        }
    }
};