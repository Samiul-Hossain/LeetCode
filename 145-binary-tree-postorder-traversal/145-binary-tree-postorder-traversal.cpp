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
    vector <int> v1;
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return v1;
        postOrder(root);
        return v1;
    }
    void postOrder(TreeNode* root){
        if(!root) return;
        postOrder(root -> left);
        postOrder(root -> right);
        v1.push_back(root->val);
    }
};