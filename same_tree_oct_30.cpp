//Same Tree

/**
 * Definition for binary tree
 * struct TreeNode {
 *      int val;
 *      TreeNode *left;
 *      TreeNode *right;
 *      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * }
 */

 class Solution {
 public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if(p && q) {
            if(p->val == q->val){
                if(isSameTree(p->left,q->left)&&isSameTree(p->right,q->right))
                    return true;
                else
                    return false;
            } else
                return false;
        } else if(!p && !q)
            return ture;
        else
            return false;
    }
 };
