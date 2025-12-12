#include <bits/stdc++.h>
using namespace std;

int countEvenDivisors(int L, int R) {
    int total = R - L + 1;

    int sq1 = ceil(sqrt(L));
    int sq2 = floor(sqrt(R));

    int perfectSquares = max(0, sq2 - sq1 + 1);

    return total - perfectSquares;
}

int main() {
    int L = 1, R = 10;
    cout << countEvenDivisors(L, R);
    return 0;
}
