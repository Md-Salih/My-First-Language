#include <bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int>& arr, int M) {
    int maxVal = *max_element(arr.begin(), arr.end());
    int countMax = 0;
    long long ans = 0;
    int left = 0;

    for (int right = 0; right < arr.size(); right++) {
        if (arr[right] == maxVal)
            countMax++;

        while (countMax >= M) {
            ans += arr.size() - right;
            if (arr[left] == maxVal)
                countMax--;
            left++;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 3, 3, 2, 3};
    int M = 2;
    cout << countSubarrays(arr, M);
    return 0;
}
