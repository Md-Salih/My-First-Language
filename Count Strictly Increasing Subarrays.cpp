#include <bits/stdc++.h>
using namespace std;

long long countIncreasingSubarrays(vector<int>& arr) {
    long long count = 1, result = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > arr[i-1]) count++;
        else count = 1;
        result += count;
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3};
    cout << countIncreasingSubarrays(arr);
    return 0;
}
