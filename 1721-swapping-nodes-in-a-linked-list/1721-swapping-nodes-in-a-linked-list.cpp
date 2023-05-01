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
 ListNode* node1 = head;
    for (int i = 1; i < k; i++) {
        node1 = node1->next;
    }
    // Find kth node from end
    ListNode* node2 = head;
    ListNode* temp = node1;
    while (temp->next != NULL) {
        temp = temp->next;
        node2 = node2->next;
    }

    // Swap values of node1 and node2
    swap(node1->val, node2->val);

    // Return the head of the linked list
    return head;




        
    }
};