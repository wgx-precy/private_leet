//Path Sum
/*Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the valuse along the path equals the given sum*/
//Wed 11:39 am
bool hasPathSum(TreeNode *root, int sum){
    bool mark = false;
    if(!root) return mark;
    countsum(root,sum,root->val,mark);
    return mark;
}

void countsum(TreeNode *root, int &sum, int tmp, bool &mark) {
    if(!root->left && !root->right)
         if(tmp == sum) {mark = true; return;}
    if(root->left)
        countsum(root->left,sum,tmp+root->left->val,mark);
    if(root->right)
        countsum(root->right,sum,tmp+root->right->val,mark);
}
//Wed 12:21 pm
bool hasPathSum(TreeNode *root, int sum) {
    if(!root) return false;
    stack<pair<TreeNode *, int> > container;
    pair<TreeNode *, int> p(root,root->val);
    container.push(p);
    bool flag = false;
    while(!container.empty() && !flag){
        if(!container.top().first->left && !container.top().first->right) {
            if(container.top().second == sum) flag = true;
            container.pop();
        }
        if(container.top().first->left) {
            pair<TreeNode *, int> p(container.top().first->left,container.top().second + container.top().first->left->val);
            container.push(p);
        }
        if(container.top().first->right) {
            pair<TreeNode *, int> p(container.top().first->right,container.top().second + container.top().first->right->val);
            container.push(p);
        }
    }
    return flag;
}
