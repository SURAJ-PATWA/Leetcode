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
    int maxLevelSum(TreeNode* root) {
    //BFS 
    int maxsum = INT_MIN;
    int resultlevel = 0;
    queue<TreeNode*> q;
    q.push(root);
    int level = 1;
    while (!q.empty()) {
        int n = q.size();
        int sum = 0;
        // Traverse nodes at the current level
        for (int i = 0; i < n; i++) {
            TreeNode* temp = q.front();
            q.pop();
            sum += temp->val;
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        // Update maxsum and resultlevel if needed
        if (sum > maxsum) {
            maxsum = sum;
            resultlevel = level;
        }
        // Update the current level
        level++;
    }
    return resultlevel;
}

};