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
        ListNode* temp =head;
        // for(auto i=temp;i!=NULL;i=i->next){
        //     for(auto j=i->next;j!=NULL;j=j->next){
        //         if(i->val>j->val){
        //             swap(i->val,j->val);
        //         }
        //     }
        // }
        // return head;
        vector<int> v;
        for(auto i=temp;i!=NULL;i=i->next){
            v.push_back(i->val);
        }
        sort(v.begin(),v.end());
        temp = head;
        for(int i=0;i<v.size();i++){
            temp->val = v[i];
            temp = temp->next;
        }

        return head;
    }
};