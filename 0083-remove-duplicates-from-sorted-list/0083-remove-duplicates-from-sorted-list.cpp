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
    ListNode* deleteDuplicates(ListNode* head) {
        // ListNode* p = head;
        if(!head) return head;
        ListNode* a = head;
        ListNode* b = a->next;
        while(a && b){
            if(a->val==b->val){
            a->next = b->next;
            b = a->next;
            }
            else
            {a = a->next;
            b = b->next;}
        }
        return head;
    }
};