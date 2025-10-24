#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Activity {
    int start, finish;
};

bool cmp(Activity a, Activity b) {
    return a.finish < b.finish;
}

int main() {
    int n;
    cout << "Enter number of activities: ";
    cin >> n;
    vector<Activity> act(n);
    for(int i=0;i<n;i++)
        cin >> act[i].start >> act[i].finish;

    sort(act.begin(), act.end(), cmp);
    cout << "\nSelected Activities:\n";
    int lastFinish = -1;
    for(auto &a : act) {
        if(a.start >= lastFinish) {
            cout << "(" << a.start << "," << a.finish << ")\n";
            lastFinish = a.finish;
        }
    }
}
