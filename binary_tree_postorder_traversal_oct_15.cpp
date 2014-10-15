// Binary Tree Postorder Traversal
/**
 * Definition for binary tree
 * struct TreeNode {
 *      int val;
 *      TreeNode *left;
 *      TreeNode *right;
 *      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * }
 */


 class Soulution {
 public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> result;
        //track current node
        stack<TreeNode *> tracker;
        //track current node visit status left 0, right 1, pop & write 2
        stack<int> count;
        if(root) {
            //start from root
            tracker.push(root);
            //set vist left
            count.push(0);
            while(!tracker.empty()) {
                if(count.top() == 0){
                    //visit right
                    count.top()++;
                    if(tracker.top()->left) {
                        tracker.push(tracker.top()->left);
                        count.push(0);
                    }
                } else if(count.top == 1){
                    if(count.top() == 1){
                        //write & pop
                        count.top()++;
                        if(tracker.top()->right) {
                            tracker.push(tracker.top()->right);
                            count.push(0);
                        }
                    }
                } else if(count.top == 2) {
                    //clean top visit status and node
                    count.pop();
                    result.push_back(tracker.top()->val);
                    tracker.pop();
                }
                
            }
        }
        return result;
    }
 }
