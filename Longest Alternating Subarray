#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 2, 4, 3};
    int n = arr.size();
    
    if (n < 2) {
        cout << n;
        return 0;
    }
    
    int longest = 1, current = 1;

    for (int i = 1; i < n; i++) {
        if ((arr[i] > arr[i-1] && (i == 1 || arr[i-1] < arr[i-2])) ||
            (arr[i] < arr[i-1] && (i == 1 || arr[i-1] > arr[i-2]))) {
            current++;
        } else {
            current = 2;
        }
        longest = max(longest, current);
    }

    cout << longest;
    return 0;
}
