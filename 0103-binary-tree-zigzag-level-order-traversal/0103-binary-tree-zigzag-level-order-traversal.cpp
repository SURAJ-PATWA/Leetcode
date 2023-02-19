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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
          if(root==NULL)return{};
         vector<vector<int>>finalans;
       stack<TreeNode *>s1;
       stack<TreeNode *>s2;
       s1.push(root);
       while(!s1.empty() || !s2.empty()){
           vector<int>ans;
           while(!s1.empty()){
           TreeNode* temp=s1.top();
           s1.pop();
           ans.push_back(temp->val);
           if(temp->left!=NULL){s2.push(temp->left);       }
           if(temp->right!=NULL){s2.push(temp->right);     }
           }
           if(ans.size()>0){finalans.push_back(ans);
           ans.clear();
           }
           while(!s2.empty()){
           TreeNode *temp=s2.top();
           s2.pop();
           ans.push_back(temp->val);
                 
           if(temp->right!=NULL){s1.push(temp->right);} 
           if(temp->left!=NULL){s1.push(temp->left);     }
           
       }
           if(ans.size()>0){finalans.push_back(ans);
           ans.clear();
           }
       }
       return finalans;
    }
};