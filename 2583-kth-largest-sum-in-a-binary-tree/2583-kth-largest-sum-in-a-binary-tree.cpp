/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
      priority_queue<long , vector<long>, greater<long>> pq;
        queue<TreeNode*> q;
        q.push(root);
        long long currLevel = 0;
        while(!q.empty()) {
            int n = q.size();
            currLevel++;
            long long levelSum = 0;
            for(int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                levelSum += curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            pq.push(levelSum);
            if(pq.size() > k) pq.pop();
        }
        if(pq.size() < k) return -1;
        return pq.top();  
    }
};