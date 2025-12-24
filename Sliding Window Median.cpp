#include <bits/stdc++.h>
using namespace std;

multiset<int> leftSet, rightSet;

void balance() {
    if(leftSet.size() > rightSet.size() + 1) {
        rightSet.insert(*leftSet.rbegin());
        leftSet.erase(prev(leftSet.end()));
    }
    else if(rightSet.size() > leftSet.size()) {
        leftSet.insert(*rightSet.begin());
        rightSet.erase(rightSet.begin());
    }
}

int main() {
    vector<int> a = {1,3,2,7,5};
    int k = 3;

    for(int i = 0; i < k; i++) {
        leftSet.insert(a[i]);
        balance();
    }

    cout << *leftSet.rbegin() << " ";

    for(int i = k; i < a.size(); i++) {
        int out = a[i-k];

        if(leftSet.find(out) != leftSet.end())
            leftSet.erase(leftSet.find(out));
        else
            rightSet.erase(rightSet.find(out));

        leftSet.insert(a[i]);
        balance();

        cout << *leftSet.rbegin() << " ";
    }
}
