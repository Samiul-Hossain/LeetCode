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
    int sum;
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        sum = 0;
        sll(root->left, true);
        sll(root->right, false);
        return sum;
    }
    void sll(TreeNode* root, bool l){
        if(!root) return;
        if(root->left == NULL && root->right == NULL && l){
            sum += root->val;
            return;
        }
        sll(root->left, true);
        sll(root->right, false);
    }
};