TreeNode *tree = new TreeNode(0);
TreeNode *h = tree;

void inorder(TreeNode *root) {
    if(root == NULL) {
        return;
    }

    inorder(root -> left);

    tree -> right = new TreeNode(root -> val);
    tree -> left = NULL;
    tree = tree -> right;

    inorder(root -> right);
}

TreeNode *increasingBST(TreeNode *root) {
    inorder(root);
    return h -> right;
}