//Path Sum

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
    bool hasPathSum(TreeNode *root, int sum) {
        if(root) {
            bool flag = false;
            calculatorSum(root, 0, flag);
            return flag;
        } else
            return false;
    }

    void calculatorSum(TreeNode *node, int &sum, int count, bool &flag) {
        if(count > sum) return;
        if(!node->left && !node->right){
            if(count + node->val == sum) {
                flag = true;
            }
        }
        if(node->left) {
            calculatorSum(node->left,sum,count+node->val,flag);
        }
        if(node->right) {
            calculatorSum(node->right,sum,count+node->val,flag);
        }
    }
};
