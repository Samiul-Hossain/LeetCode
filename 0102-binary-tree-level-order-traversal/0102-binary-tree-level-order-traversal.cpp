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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if(root==NULL)
            return ret;
        queue<TreeNode*> nodes;
        
        nodes.push(root);
        while(!nodes.empty()){
            vector<int> temp;
            int len = nodes.size();
            
            for(int i=0; i<len; i++){
                TreeNode* tempNode = nodes.front();
                nodes.pop();
                if(tempNode->left != NULL)
                    nodes.push(tempNode->left);
                if(tempNode->right != NULL)
                    nodes.push(tempNode->right);
                temp.push_back(tempNode->val);
            }
            ret.push_back(temp);
        }
        return ret;
    }
};