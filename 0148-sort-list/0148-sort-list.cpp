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
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    ListNode* dummy = new ListNode(-1);
    ListNode* dummyhead = dummy;
    ListNode* curr1 = head1;
    ListNode* curr2 = head2;

    while (curr1 && curr2) {
        if (curr1->val <= curr2->val) {
            dummy->next = curr1;
            curr1 = curr1->next;
        }
        else {
            dummy->next = curr2;
            curr2 = curr2->next;
        }
        dummy = dummy->next;
    }

    while (curr1) {
        dummy->next = curr1;
        curr1 = curr1->next;
        dummy = dummy->next;
    }
    while (curr2) {
        dummy->next = curr2;
        curr2 = curr2->next;
        dummy = dummy->next;
    }

    return dummyhead->next;
}


ListNode* findmid(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}



//Function to sort the given linked list using Merge Sort.
ListNode* sortList(ListNode* head) {

    //step 1 base case
    if (head == NULL || head->next == NULL)
        return head;

    //step2 divide 2 part left and right
    ListNode* mid = findmid(head);
    ListNode* left = head;
    ListNode* right = mid->next;
    mid->next = NULL; // Disconnect the two halves


    // recursive call
    left = sortList(left);
    right = sortList(right);

    //step 3 merge both sorted linked lists
    ListNode* result = mergeTwoLists(left, right);
    return result;
}

    
};