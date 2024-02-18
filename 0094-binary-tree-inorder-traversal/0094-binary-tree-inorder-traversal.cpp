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
    void preOrder(TreeNode* root, vector<int> &nodes){
        if(root == NULL)
            return;
        preOrder(root->left, nodes);
        nodes.push_back(root->val);
        preOrder(root->right, nodes);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        preOrder(root, nodes);
        return nodes;
    }
};