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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        inOrder(p, q);
        return ret;
    }
    void inOrder(TreeNode* p, TreeNode* q){
        if(p == NULL && q == NULL)
            return;
        if(p == NULL && q != NULL){
            ret = false;
            return;
        }
        if(p != NULL && q == NULL){
            ret = false;
            return;
        }
        inOrder(p -> left, q -> left);
        if(p -> val != q -> val){
            ret = false;
            return;
        }
        inOrder(p -> right, q -> right);
    }
};