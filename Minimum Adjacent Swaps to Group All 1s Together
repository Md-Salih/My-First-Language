#include <bits/stdc++.h>
using namespace std;

int minSwapsGroupOnes(vector<int>& a) {
    vector<int> pos;
    for (int i = 0; i < a.size(); i++)
        if (a[i] == 1)
            pos.push_back(i);

    int k = pos.size();
    if (k <= 1) return 0;

    int mid = k / 2;
    int median = pos[mid];

    int swaps = 0;
    for (int i = 0; i < k; i++)
        swaps += abs(pos[i] - (median - mid + i));

    return swaps;
}

int main() {
    vector<int> a = {1, 0, 1, 0, 1};
    cout << minSwapsGroupOnes(a);
    return 0;
}
