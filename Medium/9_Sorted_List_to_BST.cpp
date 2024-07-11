TreeNode *convertToBST(ListNode *start, ListNode *end) {
    if(start == end) return nullptr;
    ListNode *slow = start;
    ListNode *fast = start;

    while(start != end and fast -> next != end) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    TreeNode *head = new TreeNode(slow -> val);
    head -> left = convertToBST(start, slow);
    head -> right = convertToBST(slow -> next, end);
}

TreeNode *sortedListToBST(ListNode *head) {
    if(head == nullptr) return nullptr;
    return convertToBST(head, nullptr);
}