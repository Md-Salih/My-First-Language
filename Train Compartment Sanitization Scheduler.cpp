#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> t(n);

    for(int i=0;i<n;i++) cin>>t[i];

    priority_queue<int, vector<int>, greater<int>> staff;

    staff.push(0);
    staff.push(0);
    staff.push(0);

    for(int x : t){
        int freeAt = staff.top(); 
        staff.pop();
        staff.push(freeAt + x);
    }

    int totalTime = 0;
    while(!staff.empty()){
        totalTime = max(totalTime, staff.top());
        staff.pop();
    }

    cout << "Total sanitization time: " << totalTime << " minutes";
}
