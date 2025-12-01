#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> childrenList;
vector<int> sizeOfFolder;

int dfs(int node) {
    int total = sizeOfFolder[node];
    for (int child : childrenList[node]) {
        total += dfs(child);
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    childrenList.assign(n, {});
    sizeOfFolder.resize(n);

    int id, parent, size;
    int root = 0;

    for (int i = 0; i < n; i++) {
        cin >> id >> parent >> size;
        sizeOfFolder[id] = size;
        if (parent != -1) {
            childrenList[parent].push_back(id);
        } else {
            root = id;
        }
    }

    cout << "Total size: " << dfs(root);
    return 0;
}
