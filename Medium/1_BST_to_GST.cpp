void rev(TreeNode *root, int &sum) {
    if(!root) return;
    rev(root -> right, sum);

    root -> val += sum;
    sum = root -> val;

    rev(root -> left, sum);
}

TreeNode *bstToGst(TreeNode *root) {
    int sum = 0;
    rev(root, sum);
    return root;
}