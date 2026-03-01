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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        if (list2->val < list1->val) swap(list1, list2);


        struct ListNode *c = list1;
        struct ListNode *f = c->next;
        struct ListNode *t2 = list2;
       while(t2){
            if(f && (t2->val) >= (c->val) && (t2->val) <= (f->val)){
                struct ListNode *d = new ListNode;
                d->val = t2->val;
                d->next = NULL;

                c->next = d;
                d->next = f;
                c = c->next;
               
                t2 = t2->next;
            }
            else{
                if(f){
                    c=f;
                    f=f->next;

                }
                else{
                    c->next = t2;
                    break;
                }
            }

       }
    return list1;    
    }
};