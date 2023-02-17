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
    vector<int>ans;
public:
    void inorder(TreeNode* root){
        if(root==NULL)return;
     inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
        
    }
    
    
    int minDiffInBST(TreeNode* root) {
      inorder(root);
        int minnode=INT_MAX;
        for(int i=1;i<ans.size();i++){
            minnode=min(minnode,ans[i]-ans[i-1]);
        }
        return minnode;
    }
};












