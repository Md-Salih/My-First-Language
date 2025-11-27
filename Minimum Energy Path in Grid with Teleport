#include <bits/stdc++.h>
using namespace std;

long long INF = 4e18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    long long T;
    cin >> N >> M >> T;

    vector<vector<long long>> a(N, vector<long long>(M));
    for(auto &r : a) for(auto &x : r) cin >> x;

    vector<vector<long long>> dp1(N, vector<long long>(M, INF));
    vector<vector<long long>> dp2(N, vector<long long>(M, INF));

    dp1[0][0] = a[0][0];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(i) dp1[i][j] = min(dp1[i][j], dp1[i-1][j] + a[i][j]);
            if(j) dp1[i][j] = min(dp1[i][j], dp1[i][j-1] + a[i][j]);
        }
    }

    dp2[N-1][M-1] = a[N-1][M-1];
    for(int i = N-1; i >= 0; i--){
        for(int j = M-1; j >= 0; j--){
            if(i+1 < N) dp2[i][j] = min(dp2[i][j], dp2[i+1][j] + a[i][j]);
            if(j+1 < M) dp2[i][j] = min(dp2[i][j], dp2[i][j+1] + a[i][j]);
        }
    }

    long long ans = dp1[N-1][M-1];

    // Try teleport from any cell to any cell
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            ans = min(ans, dp1[i][j] + T + dp2[i][j] - a[i][j]);
        }
    }

    cout << ans;
    return 0;
}
