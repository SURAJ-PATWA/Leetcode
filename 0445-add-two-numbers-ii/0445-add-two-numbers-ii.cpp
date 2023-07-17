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
    // add two number
     ListNode* addTwoNumber(ListNode* h1, ListNode* h2) {
        ListNode *dummy=new ListNode(-1);ListNode *curr=dummy;
        int carry=0;
        while(h1||h2||carry){
            int sum=0;
            if(h1){
                sum+=h1->val;
                h1=h1->next;
            }
            if(h2){
                sum+=h2->val;
                h2=h2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode *temp=new ListNode(sum%10);
            curr->next=temp;
            curr=temp;
            
        }
        return dummy->next;
    }
    // reverse a linked list
    
    ListNode* reverseList(ListNode* head) {
       
       ListNode * curr=head;
        ListNode *prev=NULL;
        while(curr){
            ListNode *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        return prev;
        
    }
    
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode* reverseL1=reverseList(l1); 
     ListNode* reverseL2=reverseList(l2); 
       ListNode*answer =addTwoNumber(reverseL1,reverseL2);
        ListNode*finalans=reverseList(answer);
        return finalans;
        
    }
};