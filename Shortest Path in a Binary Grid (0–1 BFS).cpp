#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> grid = {
        {0,1,1},
        {1,0,1},
        {1,0,0}
    };

    int n = grid.size(), m = grid[0].size();
    deque<pair<int,int>> dq;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));

    dist[0][0] = 0;
    dq.push_front({0,0});

    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};

    while (!dq.empty()) {
        auto [x, y] = dq.front();
        dq.pop_front();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
                int w = grid[nx][ny];
                if (dist[x][y] + w < dist[nx][ny]) {
                    dist[nx][ny] = dist[x][y] + w;
                    if (w == 0)
                        dq.push_front({nx, ny});
                    else
                        dq.push_back({nx, ny});
                }
            }
        }
    }

    cout << dist[n-1][m-1];
    return 0;
}
