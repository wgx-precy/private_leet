//Populating Next Right Pointers in Each Node
/*Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL*/
//Sat 3:56 Jun21
void connect(TreeLinkNode *root) {
        if(!root) return;
        TreeLinkNode *tmp = root;
        TreeLinkNode *node;
        TreeLinkNode *next_sib = NULL;
        while(tmp->left) {
            node = tmp;
            while(node->next) {
                next_sib = node->next->left;
                node->left->next = node->right;
                node->right->next = next_sib;
                node = node->next;
            }
            node->left->next = node->right;
            tmp = tmp->left;
        }
    }

