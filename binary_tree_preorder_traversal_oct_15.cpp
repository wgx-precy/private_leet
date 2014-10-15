/**
 * Definition for binary tree
 * struct TreeNode {
 *      int val;
 *      TreeNode *left;
 *      TreeNode *right;
 *      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *};
 */

 class Solution {
 public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> result;
        if(root) {
            stack<TreeNode *> tracker;
            stack<int> count;
            tracker.push(root);
            count.push(0);
            while(!tracker.empty()) {
                if(count.top() == 0) {
                    count.top()++;
                    result.push_back(tracker.top()->val);
                }
                if(count.top() == 1){
                    count.top()++;
                    if(tracker.top()->left) {
                        count.push(0);
                        tracker.push(tracker.top()->left);
                    }
                } else if (count.top()== 2) {
                    count.top()++;
                    if(tracker.top()->right) {
                        count.push(0);
                        tracker.push(tracker.top()->right);
                    }
                } else if(count.top()==3) {
                    count.pop();
                    tracker.pop();
                }
            }
        }
        return result;
    }

