vector<TreeNode*> ans;
void inorder(TreeNode *root) {
    if(!root) return;
    inorder(root -> left);
    ans.push_back(root);
    inorder(root -> right);
}

TreeNode *solve(int l, int h) {
    if(l > h) return NULL;
    int m = (l + h) / 2;
    ans[m] -> left = solve(l, m-1);
    ans[m] -> right = solve(m+1, h);
    return ans[m];
}

TreeNode *balanceBST(TreeNode *root) {
    inorder(root);
    return solve(0, ans.size() - 1);
}