
/**
 * Definiting for binary tree
 * struct TreeNode {
 *      int val;
 *      TreeNode *left;
 *      TreeNode *right;
 *      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * }
 */

 class Solution {
 public:
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> > result;
        if(root) {
            vector<TreeNode *> vertical;
            vector<TreeNode *> tracker;
            vector<int> horizatal;
            vertical.push_back(root);
            while(!vertical.empty()) {
                while(!vertical.empty()) {
                    hoizatal.push_back(vertical.top()->val());
                    if(vertical.top().left) tracker.push_back(vertical.top().left);
                    if(vertical.top().right) tracker.push_back(vertical.top().right);
                    vertical.pop();
                }
                result.push_back(horizatal);
                horizatal.clear();
                vertical = tracker;
                tracker.clear();
            }
        }
        return result;
    }
 };
