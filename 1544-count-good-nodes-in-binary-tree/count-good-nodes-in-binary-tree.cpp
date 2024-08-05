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
    int goodNodes(TreeNode* root) {
        good(root,root->val);
        return c;
    }
    int c=0;
    void good(TreeNode* root, int m){
        if(root==NULL) return;
        if(root->val>=m) {c++;
         m=max(m,root->val);
        }
       
        good(root->left,m);
        good(root->right,m);
    }

};