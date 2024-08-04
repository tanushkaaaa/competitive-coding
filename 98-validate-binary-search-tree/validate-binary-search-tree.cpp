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
    bool isValidBST(TreeNode* root, TreeNode* minN=nullptr, TreeNode* maxN=nullptr ) {
        if(!root) return true;
        if(minN && root->val<=minN->val) return false;
        if(maxN && root->val >=maxN->val) return false;
        return isValidBST(root->left,minN,root) && isValidBST(root->right,root,maxN);
    }
};