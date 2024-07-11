string serialize(TreeNode *root) {
    if(root == nullptr) return "";

    string s = "";
    helper(root, s);

    return s;
}

helper(TreeNode *root, string s) {
    if(root == nullptr) return;

    s += to_string(root -> val) + ",";
    helper(root -> left, s);
    helper(root -> right, s);
}