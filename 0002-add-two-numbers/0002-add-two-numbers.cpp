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
    // long long s(struct ListNode* head){
        //     struct ListNode* temp = head;
        //     long long ss=0;
        //     long long m=1;
        //     while(temp){
        //         ss+= temp->val*m;
        //         m*=10;
        //         temp=temp->next;
        //     }
        //     return ss;
        // }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //     long long x1 = s(l1);
    //     long long x2 = s(l2);
    //     long long x = x1 + x2;

    //    struct ListNode* res = new ListNode();
    //     res->val = x%10;
    //     res->next = NULL;
    //     x = x/10;

    //     struct ListNode* temp1 = res;
        
    //     while(x!=0){
    //          struct ListNode* newnode = new ListNode();
    //          newnode->val = x%10;
    //          newnode->next = NULL;
    //          x=x/10;
    //          temp1->next = newnode;
    //          temp1=newnode;
    //     }
    //     return res;
    struct ListNode* temp1 = l1;
    struct ListNode* temp2 = l2;
    struct ListNode* head = new ListNode();
     struct ListNode* temp3 = head; 
     int sum = 0;
    int carry = 0;
    while(temp1 || temp2 ){
        sum=0;
        if(temp1 && temp2){
            struct ListNode* neh = new ListNode();
            sum = temp1->val + temp2->val + carry;
            if(carry>0){
                neh->val = sum%10;
                carry=0;
            }
            else neh->val = sum%10;
            temp3->next = neh;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if(temp1){
            struct ListNode* neh = new ListNode();
            sum= temp1->val+carry;
           if(carry>0){
                neh->val = sum%10 ;
                carry=0;
            }
            else neh->val = sum%10;
            temp3->next = neh;
            temp1=temp1->next;
        }
        else if(temp2){
             struct ListNode* neh = new ListNode();
            
                sum= temp2->val+carry;
           if(carry>0){
                neh->val =sum%10;
                carry=0;
            }
            else neh->val = sum%10;
            temp3->next = neh;
            temp2=temp2->next;
        }
        carry=sum/10;
        temp3 = temp3->next;
    }
    if(carry){
        struct ListNode* neh = new ListNode();
        neh->val=1;
        temp3->next=neh;
    }
    return head->next;
    }
};