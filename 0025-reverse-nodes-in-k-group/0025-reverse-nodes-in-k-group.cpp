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
    int len(ListNode *head){
        ListNode *curr=head;int count=0;
        while(curr){
           
            curr=curr->next;
            count++;
        }
        return count;
    }
    
    
    ListNode* solve(ListNode* head, int k,int length) {
        // base case
        if(k>length)// agar length choti haa
        {
            return head;
        }
        
         ListNode *curr=head,*next=NULL,*prev=NULL;
    int count=0;
    while(curr!=NULL&&count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next=solve(next,k,length-k);
    }
    return prev;
    }
        
         ListNode* reverseKGroup(ListNode* head, int k) {
             int length=len(head);
             return solve(head,k,length);
        
        
    }
};