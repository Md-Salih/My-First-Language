#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

int orient(Point a, Point b, Point c) {
    int val = (b.y - a.y) * (c.x - b.x)
            - (b.x - a.x) * (c.y - b.y);
    if (val == 0) return 0;
    return (val > 0) ? 1 : 2;
}

bool onSegment(Point a, Point b, Point c) {
    return min(a.x, c.x) <= b.x && b.x <= max(a.x, c.x) &&
           min(a.y, c.y) <= b.y && b.y <= max(a.y, c.y);
}

int main() {
    Point p1 = {1,1}, q1 = {4,4};
    Point p2 = {1,4}, q2 = {4,1};

    int o1 = orient(p1, q1, p2);
    int o2 = orient(p1, q1, q2);
    int o3 = orient(p2, q2, p1);
    int o4 = orient(p2, q2, q1);

    bool intersect = false;

    if (o1 != o2 && o3 != o4) intersect = true;
    if (o1 == 0 && onSegment(p1, p2, q1)) intersect = true;
    if (o2 == 0 && onSegment(p1, q2, q1)) intersect = true;
    if (o3 == 0 && onSegment(p2, p1, q2)) intersect = true;
    if (o4 == 0 && onSegment(p2, q1, q2)) intersect = true;

    cout << (intersect ? "YES" : "NO");
    return 0;
}
