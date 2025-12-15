#include <bits/stdc++.h>
using namespace std;

int countBits(int x) {
    int cnt = 0;
    while (x) {
        x &= (x - 1);
        cnt++;
    }
    return cnt;
}

int findOddBitCount(vector<int>& arr) {
    for (int x : arr)
        if (countBits(x) % 2 == 1)
            return x;
    return -1;
}

int main() {
    vector<int> arr = {3, 5, 6, 7};
    cout << findOddBitCount(arr);
    return 0;
}
