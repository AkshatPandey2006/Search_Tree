TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    while(true) {
        if(root -> val > p -> val and root -> val > q -> val) root = root -> left;
        else if(root -> val < p -> val and root -> val < q -> val) root = root -> right;
        else return root;
    }
}