#include <bits/stdc++.h>
using namespace std;

int largestDigit(int n) {
    int mx = 0;
    while (n) {
        mx = max(mx, n % 10);
        n /= 10;
    }
    return mx;
}

int main() {
    int n = 27;
    int steps = 0;

    while (n > 0) {
        n -= largestDigit(n);
        steps++;
    }

    cout << steps;
    return 0;
}
