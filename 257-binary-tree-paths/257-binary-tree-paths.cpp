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
    vector <string> v1;
    int c = 0;
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root)
            return v1;
        vector <string> pt;
        path(root, pt);
        return v1;
    }
    void path(TreeNode* root, vector<string> pt){
        if(!root) return;
        pt.push_back(to_string(root->val));
        if(root -> left == NULL && root -> right == NULL){
            int it = (int) pt.size();
            v1.push_back(pt[0]);
            for(int i=1; i<it; i++){
                v1[c] = v1[c] + "->" + pt[i];
            }
            c++;
        }
        path(root->left, pt);
        path(root->right, pt);
    }
};