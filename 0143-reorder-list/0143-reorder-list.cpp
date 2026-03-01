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
    void reorderList(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        int n=0;
        while(temp){
            v.push_back(temp->val);
            n++;
            temp = temp->next;
        }
        temp = head;
        int l=0;
        int r=n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
            temp->val = v[l];
            l++;
            }
            else{
                temp->val = v[r];
                r--;
            }
            temp = temp->next;
        }
    }
};