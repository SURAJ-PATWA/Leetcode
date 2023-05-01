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
    ListNode* swapNodes(ListNode* head, int k) {
 ListNode* p1 = head;
    for (int i = 1; i < k; i++) {
        p1 = p1->next;
    }
    // Find kth node from end
    ListNode* slow = head;
    ListNode* fast = p1;
    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    // Swap values of slow and p1     
    swap(p1->val, slow->val);

    // Return the head of the linked list
    return head;




        
    }
};