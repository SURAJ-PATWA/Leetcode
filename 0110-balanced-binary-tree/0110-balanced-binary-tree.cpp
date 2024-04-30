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
    private:
    int solve(TreeNode*root){
        if(root==NULL)return 0;
        int leftheight=solve(root->left);
        if(leftheight==-1)return -1;
        int rightheight=solve(root->right);
        if(rightheight==-1)return -1;
        
        if(abs(leftheight-rightheight)>1)return -1;
        else{
          return   1+max(leftheight , rightheight);
        }
    }
public:
    bool isBalanced(TreeNode* root) {
        int ans=solve(root);
        return ans==-1?false:true;
    }
};

// int isbalanced(TreeNode *root){
//         if(root==NULL)return 0;
        
//         int lh=isbalanced(root->left);
//         if(lh==-1)return -1;
//         int rh=isbalanced(root->right);
//         if(rh==-1)return -1;
//         if(abs(lh-rh)>1)return -1;
//         else{
//             return 1+max(lh,rh);
//         }
//     }
//     bool isBalanced(TreeNode* root) {
//        int ans=isbalanced(root);
//         if(ans==-1)return false;
//         return true;  
//     }