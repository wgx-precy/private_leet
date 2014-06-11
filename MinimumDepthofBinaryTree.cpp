//Minimum Depth of Binary Tree
/*Given a binary tree, find its minimum depth*/
/*The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.*/
//Wed 6:00pm
int minDepth(TreeNode *root) {
    if(!root) return 0;
    return countmin(root);
}
int countmin(TreeNode *node) {
    if(!node) return INT_MAX;
    if(!node->right&&!node->left) return 1;
    return min(countmin(node->left),count(node->right))+1;
}

