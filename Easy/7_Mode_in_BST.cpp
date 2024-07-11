int val = INT_MIN;
int freq = 0;
int maxi = 0;
vector<int> ans;

void inorder(TreeNode *root) {
    if(root == NULL) return;
    inorder(root -> left);

    if(val == root -> val) {
        freq++;
    }
    else {
        val = root -> val;
        freq = 1;
    }
    if(freq == maxi) {
        ans.push_back(root -> val);
    }

    inorder(root -> right);
}

vector<int> findMode(TreeNode *root) {
    inorder(root);
    return ans;
}