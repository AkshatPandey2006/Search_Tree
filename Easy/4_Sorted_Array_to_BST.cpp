TreeNode *sortedArrayToBST(vector<int> &nums, int start, int end) {
    if(end <= start) return NULL;
    int mid = (start + end) / 2;

    TreeNode *root = new TreeNode(nums[mid]);
    root -> left = sortedArrayToBST(nums, start, mid);
    root -> right = sortedArrayToBST(nums, mid+1, end);

    return root;
}

TreeNode *sortedArrayToBST(vector<int> &nums) {
    return sortedArrayToBST(nums, 0, nums.size());
}