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
    int cnt = 0;
    map<int, int> count;
    void preOrder(TreeNode* root, int len){
        if(!root){
            return;
        }
        count[root->val] ++;
        if(!root->left && !root->right){
            int oddCnt = 0;
            for(auto it: count){
                if(it.second%2 != 0)
                    oddCnt++;
            }
            if(oddCnt <= 1)
                cnt++;
            count[root->val]--;
            return;
        }
        preOrder(root->left, len+1);
        preOrder(root->right, len+1);
        count[root->val]--;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        if(!root)
            return 0;
        if(!root->left && !root->right)
            return 1;
        preOrder(root, 1);
        return cnt;
    }
};