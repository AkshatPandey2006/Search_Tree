bool findTarget(TreeNode *root, int k) {
    vector<int> traversal;
    inorderTraversal(root, traversal);

    int left = 0;
    int right = traversal.size() - 1;

    while(left < right) {
        if(traversal[left] + traversal[right] == k) {
            return true;
        }
        else if(traversal[left] + traversal[right] > k) {
            right--;
        }
        else {
            left++;
        }
    }
    return false;
}

void inorderTraversal(TreeNode *root, vector<int> &traversal) {
    if(root == NULL) return;
    inroderTraversal(root -> left, traversal);
    traversal.push_back(root -> val);
    inroderTraversal(root -> right, traversal);
}