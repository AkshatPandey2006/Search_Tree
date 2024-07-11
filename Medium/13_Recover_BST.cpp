void markTree(TreeNode *root, TreeNode *&prev, TreeNode *&first, TreeNode *&end) {
    if(!root) return;
    markTree(root -> left, first, end);
    if(prev) {
        if(root -> val < prev -> val) {
            if(!first) {
                first = prev;
            }
            end = root;
        }
    }
    prev = root;
    markTree(root -> right, first, end);
}

void recoverTree(TreeNode *root) {
    TreeNode *prev = nullptr;
    TreeNode *first = nullptr;
    TreeNode *end = nullptr;

    markTree(root, prev, first, end);
    swap(first -> val, end -> val);
    return;
}