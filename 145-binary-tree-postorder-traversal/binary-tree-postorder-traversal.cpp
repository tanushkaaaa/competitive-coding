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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*>st;
        TreeNode* lastV=nullptr;

        while(root|| !st.empty()){
            while(root){
                st.push(root);
                root=root->left;
            }
            TreeNode* node=st.top();

            if(!node->right || node->right==lastV){
                ans.push_back(node->val);
                st.pop();
                lastV=node;
            }
            else{
                root=node->right;
            }
        }
        return ans;
    }
};