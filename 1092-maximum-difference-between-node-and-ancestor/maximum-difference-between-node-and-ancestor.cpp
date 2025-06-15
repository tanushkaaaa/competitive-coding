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
 int maxDiff;
    void maxDiffC(TreeNode* root,TreeNode* child){
        if(!root || !child) return;
        maxDiff= max(maxDiff,abs(root->val - child->val));
        maxDiffC(root,child->left);
         maxDiffC(root,child->right);
    }
    void maxDiffA(TreeNode* root){
        if(!root) return;
        maxDiffC(root,root->left);
        maxDiffC(root,root->right);
        maxDiffA(root->left);
        maxDiffA(root->right);
    }
    int maxAncestorDiff(TreeNode* root) {
         maxDiff=-1;
        maxDiffA(root);
        return maxDiff;
    }
};