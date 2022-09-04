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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> v;
        q.push(root);
        while(!q.empty()){
            long temp = 0;
            int s = q.size();
            for(int i=0; i<s; i++){
                TreeNode* t = q.front();
                temp += t->val;
                if(t->right) q.push(t->right);
                if(t->left) q.push(t->left);
                q.pop();
            }
            v.push_back((double)temp/s);
        }
        return v;
    }
};