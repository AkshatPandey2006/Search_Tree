TreeNode *deserialize(string data) {
    if(data == "") return nullptr;
    return helper(data, INT_MIN, INT_NAX);
}

int convert(string &data, int &pos) {
    pos = data.find(',');
    int value = stoi(data.substr(0, pos));
    return value;
}

TreeNode *helper(string &data, int min, int max) {
    if(data.size() == 0) return nullptr;
    int pos = 0;
    int value = convert(data, pos);
    if(value < min or value > max) return nullptr;

    TreeNode *tnode = new TreeNode(value);
    data = data.substr(pos+1);

    tnode -> left = helper(data, min, tnode -> val);
    tnode -> right = helper(data, tnode -> val, max);

    return tnode;
}