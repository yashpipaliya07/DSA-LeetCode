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
    bool hasCycle(ListNode *head) {
    if(head==NULL ||head->next == NULL) return false;
    struct ListNode* c = head;
    struct ListNode* f = head;
    
    while(f && f->next){
        c=c->next;
        f=f->next->next;
        if(c==f) return true;
    }
    return false;
    }
};