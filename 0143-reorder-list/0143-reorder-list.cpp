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
    //for reverse
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
    
    
    
    
    
    
    
    
    
    void reorderList(ListNode* head) {
     if(head==nullptr||head->next==nullptr)return ;
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *prev=new ListNode;
        prev->next=head;
        
        while(fast &&fast->next){
           slow=slow->next;
            fast=fast->next->next;
            prev=prev->next;
        }
        prev->next=NULL;
        ListNode *L1=head;
        ListNode *L2=reverseList(slow);
        merge(L1,L2);
        
    }
    
    void merge(ListNode *L1,ListNode *L2){
       while(L2){
           ListNode *temp=L1->next;
           L1->next=L2;
           L1=L2;
           L2=temp;
       }
    }
    
    
};