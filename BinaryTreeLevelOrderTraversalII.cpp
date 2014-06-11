//Binary Tree Level Order TraversalII
/*Given a binary tree, return the bottom-up level order traversal of its nodes' values.(ie, from left to right, level by level from leaf to root).*/
//Wed 7:12pm
vector<vector<int> > levelOrderBottom(TreeNode *root) {
    vector<vector<int> > result;
    if(!root) return result;
    vector<int> tmp;
    bool flag = true;
    stack<TreeNode *> tracker;
    stack<TreeNode *> tmp_tracker;
    tracker.push(root);
    while(flag||!tracker.empty()) {
        if(tracker.empty()){
	    if(tmp_tracker.empty()) flag = false;
	    result.push_back(tmp);
	    tmp.clear();
	    while(!tmp_tracker.empty()){
		tracker.push(tmp_tracker.top());
		tmp_tracker.pop();
	    }
	} else {
	    tmp.push_back(tracker.top()->val);
	    if(tracker.top()->left) {tmp_tracker.push(tracker.top()->left);flag = true;}
	    if(tracker.top()->right) {tmp_trakcer.push(tracker.top()->right);flag = true;}
	    tracker.pop();
	}
    }
    reverse(result.begin(),result.end());
    return result;
}
vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> >result;
        if(!root) return result;
        vector<int> tmp;
        bool flag = true;
        stack<TreeNode *> tracker;
        stack<TreeNode *> tmp_tracker;
        tracker.push(root);
        while(flag||!tracker.empty()) {
            if(tracker.empty()) {
                if(tmp_tracker.empty()) flag = false;
                result.push_back(tmp);
                tmp.clear();
                while(!tmp_tracker.empty()) {
                    tracker.push(tmp_tracker.top());
                    tmp_tracker.pop();
                }
            } else {
                tmp.push_back(tracker.top()->val);
                if(tracker.top()->left){tmp_tracker.push(tracker.top()->left);flag = true;}
                if(tracker.top()->right) {tmp_tracker.push(tracker.top()->right);flag = true;}
                tracker.pop();
            }
        }
        reverse(result.begin(),result.end());
        return result;
}
