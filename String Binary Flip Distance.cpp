#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B;
    cin >> A >> B;
    int n = A.size();
    int cnt = 0;

    for (int i = 0; i + 2 < n; i++) {
        if (A[i] != B[i]) {
            A[i] = (A[i] == '0' ? '1' : '0');
            A[i+1] = (A[i+1] == '0' ? '1' : '0');
            A[i+2] = (A[i+2] == '0' ? '1' : '0');
            cnt++;
        }
    }

    if (A == B) cout << cnt;
    else cout << -1;

    return 0;
}
