#include <bits/stdc++.h>
using namespace std;

int collatzSteps(long long n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
        steps++;
    }
    return steps;
}

int bestCollatz(vector<int>& arr) {
    int bestSteps = INT_MAX;
    int answer = -1;

    for (int x : arr) {
        int steps = collatzSteps(x);
        if (steps < bestSteps) {
            bestSteps = steps;
            answer = x;
        }
    }
    return answer;
}

int main() {
    vector<int> arr = {6, 7, 8};
    cout << bestCollatz(arr);
    return 0;
}
