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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL||head->next->next==NULL)return head;
        ListNode *oddhead=head;
        ListNode *oddtail=head;
        ListNode *evenhead=head->next;
        ListNode *eventail=head->next;
        while(eventail!=NULL && eventail->next!=NULL){
            oddtail->next=eventail->next;
            oddtail=eventail->next;
            eventail->next=oddtail->next;
            eventail=oddtail->next;
            
        }
        oddtail->next=evenhead;
        return head;
    }
};