/**
 * Definition for binary tree
 * struct TreeNode {
 *      int val;
 *      TreeNode *left;
 *      TreeNode *right;
 *      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 class Solution {
 public:
    bool isSymmetric(TreeNode *root) {
        if(root) {
            return isSymmetricTree(root->left,root->right);
        } else
            return true;
    }
    bool isSymmetricTree(TreeNode *left, TreeNode *right) {
        if(left==NULL && right==NULL)
            return true;
        if(left->val == right-> val) {
            if(isSymmetricTree(left->left,right->right) && isSymmetricTree(left->right,right->left))
                return true;
            else 
                return false;
        } else {
            return false;
    }
 };
