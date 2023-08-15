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
    ListNode* partition(ListNode* head, int x) {
        ListNode *temp1=new ListNode(-1);
        ListNode *temp2=new ListNode(-1);
        ListNode *curr1=temp1;
         ListNode *curr2=temp2;
        ListNode *curr=head;
        
        while (curr) {
            if (curr->val < x) {
                curr1->next = curr;
                curr1 = curr1->next;
            } else {
                curr2->next = curr;
                curr2 = curr2->next;
            }
            curr = curr->next;
        }
        curr1->next = temp2->next;
        curr2->next = nullptr;
        ListNode *result = temp1->next;
        delete temp1;
        delete temp2;
        
        
        
        return result;
        
        
    }
};
