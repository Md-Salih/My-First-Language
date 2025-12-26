#include <bits/stdc++.h>
using namespace std;

struct P{
    long long x,y;
};

long long cross(P a, P b, P c){
    return (b.x-a.x)*(c.y-a.y) - (b.y-a.y)*(c.x-a.x);
}

int main(){
    vector<P> pts = {{0,0},{1,1},{2,2},{2,0},{1,2}};
    sort(pts.begin(), pts.end(), [](P a, P b){
        return a.x==b.x ? a.y<b.y : a.x<b.x;
    });

    vector<P> hull;

    // lower hull
    for(auto p:pts){
        while(hull.size()>=2 && cross(hull[hull.size()-2], hull.back(), p) <= 0)
            hull.pop_back();
        hull.push_back(p);
    }

    // upper hull
    int k = hull.size();
    for(int i=pts.size()-2;i>=0;i--){
        auto p = pts[i];
        while(hull.size()>k && cross(hull[hull.size()-2], hull.back(), p) <= 0)
            hull.pop_back();
        hull.push_back(p);
    }

    hull.pop_back();

    for(auto &p:hull)
        cout<< "("<<p.x<<","<<p.y<<") ";
}
