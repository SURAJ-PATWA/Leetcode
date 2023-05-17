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
    int pairSum(ListNode* head) {
        vector<int>v;
        while(head!=nullptr){
            v.push_back(head->val);
            head=head->next;
        }
        
        int sum=0;
        for(int i=0;i<v.size();i++){
            int ans= v[i]+v[v.size()-1-i];
            sum=max(sum,ans);
        }
        return sum;
        
        
    }
};