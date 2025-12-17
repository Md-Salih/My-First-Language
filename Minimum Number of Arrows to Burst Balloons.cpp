#include <bits/stdc++.h>
using namespace std;

int minArrows(vector<vector<int>>& points) {
    sort(points.begin(), points.end(),
         [](auto &a, auto &b) { return a[1] < b[1]; });

    int arrows = 1;
    int end = points[0][1];

    for (int i = 1; i < points.size(); i++) {
        if (points[i][0] > end) {
            arrows++;
            end = points[i][1];
        }
    }
    return arrows;
}

int main() {
    vector<vector<int>> points = {{1,6},{2,8},{7,12},{10,16}};
    cout << minArrows(points);
    return 0;
}
