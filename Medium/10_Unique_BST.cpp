int numTrees(int n) {
    vector<int> result(n+1, 0);
    result[1] = result[0] = 1;

    for(int i=0; i<=n; i++) {
        for(int j=0; j<i; j++) {
            result[i] += result[j] * result[i-j-1];
        }
    }

    return result[n];
}