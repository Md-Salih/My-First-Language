#include <bits/stdc++.h>
using namespace std;

int findKthMissing(vector<int>& arr, int k) {
    int current = 1;
    int index = 0;

    while (true) {
        if (index < arr.size() && arr[index] == current) {
            index++;
        } else {
            k--;
            if (k == 0) return current;
        }
        current++;
    }
}

int main() {
    vector<int> arr = {2, 3, 7, 11};
    int k = 5;

    cout << findKthMissing(arr, k);
    return 0;
}
