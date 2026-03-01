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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if(!head) return head;
        ListNode* t = head;
        int co = 0;
        while(t){
            t = t->next;
            co++;
        }
        // if(co==1){
        //     head = head->next;
        //     return head;
        // }
       ListNode* temp = head;
        int i = 1;
        ListNode* c = new ListNode(NULL);
        if(co-n+1 == 1){
            head = head->next;
            return head;
        }
        while(i != co-n+1){
            c = temp;
            temp = temp->next;
            i++;
        }
        c->next = temp->next;
        // delete temp;
        return head;
    }
};