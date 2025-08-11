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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        iot(root,nodes);
        return nodes;
    }
    void iot(TreeNode* node,vector<int>&nodes){
        if(!node){
            return;
        }
        iot(node->left,nodes);
        nodes.push_back(node->val);
        iot(node->right,nodes);
    }
};