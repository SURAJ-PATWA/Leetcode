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
    int funheight(TreeNode *root){
        if(root==NULL)return 0;
        return 1+max(funheight(root->left),funheight(root->right));
    }
    
    int sum=0;
    int fun(TreeNode *root,int k){
        if(root==NULL)return 0;
        if(k==1){
            sum+=root->val;
        }
        else{
            fun(root->left,k-1);
            fun(root->right,k-1);
        }
        
        return sum;
        
    }
    
    
    
    
    
    
    
    
    int deepestLeavesSum(TreeNode* root) {
        int height=funheight(root);
        return fun(root,height);
    }
};