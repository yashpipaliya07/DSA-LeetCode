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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        // stack<int> s;
        // ListNode* t=head;
        // s.push(t->val);
        // t=t->next;
        // while(t){
        //    if(t->val==s.top()){
        //     s.pop();
        //    }
        //    else{
        //     s.push(t->val);
        //    }
        //    t = t->next; 
        // }
        // if(s.empty()) return true;
        // else return false;


        stack<int> h;
        ListNode* s=head;
        ListNode* f=head;
        while(f&&f->next){
            h.push(s->val);
            s=s->next;
            f = f->next->next;
        }
        if(f) s = s->next;
        while(s){
            if(s->val!=h.top()) return false;
            h.pop();
            s = s->next;
        }
        return true;
    }
};