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
    int len = 100000; 
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        if(root -> left == NULL && root -> right == NULL){
            return 1;
        }
        inOrder(root -> left, 2);
        inOrder(root -> right, 2);
        return len;
    }
    void inOrder(TreeNode* root, int l){
        if(root == NULL)
            return;
        if(root -> left == NULL && root -> right == NULL){
            if (l<len)
                len = l;
        }
        inOrder(root -> left, l+1);
        inOrder(root -> right, l+1);
        
    }
};