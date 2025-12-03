#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    vector<pair<int,int>> merged;
    merged.push_back(a[0]);

    for(int i = 1; i < n; i++) {
        auto &last = merged.back();
        if(a[i].first <= last.second) {
            last.second = max(last.second, a[i].second);
        } else {
            merged.push_back(a[i]);
        }
    }

    for(auto &p : merged)
        cout << p.first << " " << p.second << "\n";

    return 0;
}
