// Balanced Binary Tree

/**
 * definition for binary tree
 * struct TreeNode {
 *      int val;
 *      TreeNode *left;
 *      TreeNode *right;
 *      TreeNode(int x) : val(x), left(NULL), right(NULL
 * };
 */

 class Solution {
 public:
    bool isBalanced(TreeNode *root) {
        bool result = true;
        if(root) {
            result = isBalancedNode(root);    
        }
        return result;
    }
    bool isBalancedNode(TreeNode *node) {
        if(abs(nodeHeight(node->left)-nodeHeight(node->right))<=1) {
            if(isBalancedNode(node->left) && isBalancedNode(node->right))
                return true;
            else
                return false
        } else
            return false;
    }
    int nodeHeight(TreeNode *node) {
        if(node) {
            max(nodeHeight(node->left),nodeHeight(node->right))+1;
        } else
            return 0;
    }
 };
