//Path Sum II
/*Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum. */
//Wed 12:59 pm
vector<vector<int> > pathSum(TreeNode *root, int sum) {
    vector<vector<int> >result;
    if(!root) return result;
    vector<int> v;
    v.push_back(root->val);
    count(root,sum,root->val,result,v);
    return result;
}
void count(TreeNode *node, int &sum, int tmp, vector<vector<int> >&result, vector<int> v) {
    if(!node->left && !node->right)
        if(tmp == sum) result.push_back(v);
    if(node->left) {
        v.push_back(node->left->val);
	count(node->left,sum,tmp+node->left->val,result,v);
	v.pop_back();
    }
    if(node->right) {
        v.push_back(node->right->val);
	count(node->right,sum,tmp+node->right->val,result,v);
	v.pop_back();
    }
}
