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
    ListNode* reverseList(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode=new ListNode(-1);
        ListNode* head=dummyNode;
        ListNode* first=reverseList(l1);
        ListNode* second=reverseList(l2);
        int carry=0;
       while(first!=NULL||second!=NULL){
        int sum=carry;
        if(first){
            sum+=first->val;
            first=first->next;
        }
        if(second){
            sum+=second->val;
            second=second->next;
        }
        ListNode* newNode=new ListNode(sum%10);
        carry=sum/10;

        head->next=newNode;
        head=head->next;
       }
       if(carry){
        ListNode* carr=new ListNode(carry);
        head->next=carr;
       }
       return reverseList(dummyNode->next);
    }
};