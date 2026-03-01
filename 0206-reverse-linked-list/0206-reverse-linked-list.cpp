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
    ListNode* reverseList(ListNode* head) {
        struct ListNode* curr = head;
        struct ListNode* aagal = NULL;
        struct ListNode* pachal = NULL;
        while(curr){
            aagal = curr->next;
            curr->next = pachal;
            pachal = curr;
            curr = aagal;
        } 
        return pachal;
    }
};