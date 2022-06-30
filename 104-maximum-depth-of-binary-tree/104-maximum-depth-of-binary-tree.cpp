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
    int len = 1;
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        inOrder(root, 1);
        return len;
    }
    void inOrder(TreeNode* root, int l){
        if(root == NULL){
            return;
        }
        if(l>len){
            len = l;
        }
        inOrder(root -> left, l + 1);
        inOrder(root -> right, l + 1);
    }
};