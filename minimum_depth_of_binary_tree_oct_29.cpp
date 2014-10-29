//Minimum Depth of Binary Tree

/**
 * Definition for binary tree
 * struct TreeNode {
 *      int val;
 *      TreeNode *left;
 *      TreeNode *right;
 *      TreeNode (int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 class Solution {
 public:
    int minDepth(TreeNode *root) {
        int result = 0
        if(root) {
            result = min(minDepth(root->left),minDepth(root->right))+1;
        }
        return result;
    }
 };
