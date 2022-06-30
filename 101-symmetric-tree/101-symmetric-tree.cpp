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
    bool ret = true;
    bool isSymmetric(TreeNode* root) {
        inOrder(root -> left, root -> right);
        return ret;
    }
    void inOrder(TreeNode* l, TreeNode* r){
        if(l == NULL && r == NULL)
            return;
        if(l == NULL && r != NULL){
            ret = false;
            return;
        }
        if(l != NULL && r == NULL){
            ret = false;
            return;
        }
        if(l -> val != r -> val){
            ret = false;
            return;
        }
        inOrder(l -> left, r -> right);
        inOrder(l -> right, r -> left);
    }
};