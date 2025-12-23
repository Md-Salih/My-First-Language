#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1e9 + 7;

struct Matrix {
    long long a, b, c, d;
};

Matrix multiply(Matrix x, Matrix y) {
    return {
        (x.a*y.a + x.b*y.c) % MOD,
        (x.a*y.b + x.b*y.d) % MOD,
        (x.c*y.a + x.d*y.c) % MOD,
        (x.c*y.b + x.d*y.d) % MOD
    };
}

Matrix power(Matrix base, long long exp) {
    Matrix res = {1, 0, 0, 1}; // Identity
    while (exp) {
        if (exp & 1) res = multiply(res, base);
        base = multiply(base, base);
        exp >>= 1;
    }
    return res;
}

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    Matrix fib = {1, 1, 1, 0};
    Matrix ans = power(fib, n - 1);

    cout << ans.a;
    return 0;
}
