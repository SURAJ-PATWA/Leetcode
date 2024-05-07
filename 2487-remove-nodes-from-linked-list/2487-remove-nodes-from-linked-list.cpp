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
    
    private:
   ListNode* reverseList(ListNode* head) {
       ListNode*curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL){
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            
            curr=temp;
        }
        return prev;
    }
public:
    ListNode* removeNodes(ListNode* head) {
               head=reverseList(head);
        ListNode *curr=head; ListNode*prev=NULL;int maxi=-1;
        while(curr!=NULL){
            maxi=max(maxi,curr->val);
            if(curr->val < maxi){
                prev->next = curr->next;
                ListNode *deleteNode = curr;
                curr=curr->next;
                delete(deleteNode);
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return reverseList(head);
               
    }
};