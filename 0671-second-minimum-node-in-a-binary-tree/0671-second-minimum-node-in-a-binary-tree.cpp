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
   





 void inOrder(TreeNode* root, set<int>& st){
        if(root==NULL) return;
        inOrder(root->left,st);
        st.insert(root->val);
        inOrder(root->right,st);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        set<int> st;
        inOrder(root,st);
        if(st.size()<2) return -1;
        
        auto it=next(st.begin(),1);
        return *it;

       
    }
    };