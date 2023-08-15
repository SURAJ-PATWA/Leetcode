/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // jaha loop ban raha haa wahi return karo bus beta
        if(head==NULL||head->next==NULL)return NULL;                                         //base case
        ListNode *slow=head;ListNode *fast=head;ListNode*entry=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){ //mean its create loop
                while(entry!=slow){
                slow=slow->next;
            entry=entry->next;
                }
            return entry;
            }
        }
        return NULL;
        
    }
};