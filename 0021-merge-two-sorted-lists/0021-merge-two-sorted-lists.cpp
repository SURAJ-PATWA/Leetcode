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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
       ListNode *dummy=new ListNode(-1); ListNode*dummyhead=dummy;ListNode *curr1=head1;ListNode *curr2=head2;
    while(curr1 && curr2){
        if(curr1->val<=curr2->val){
            dummy->next=curr1;
            curr1=curr1->next;
        }
        else{
            dummy->next=curr2;
            curr2=curr2->next;
        }
        dummy=dummy->next;
    }
    
    while(curr1){
        dummy->next=curr1;
            curr1=curr1->next;
             dummy=dummy->next;
    }
    while(curr2){
       dummy->next=curr2;
            curr2=curr2->next; 
                         dummy=dummy->next;

    }
    return dummyhead->next;

    }
};