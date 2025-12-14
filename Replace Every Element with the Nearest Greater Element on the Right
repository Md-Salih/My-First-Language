#include <bits/stdc++.h>
using namespace std;

vector<int> nearestGreaterRight(vector<int>& arr) {
    stack<int> st;
    vector<int> res(arr.size(), -1);

    for (int i = arr.size() - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i])
            st.pop();

        if (!st.empty())
            res[i] = st.top();

        st.push(arr[i]);
    }

    return res;
}

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> ans = nearestGreaterRight(arr);

    for (int x : ans) cout << x << " ";
    return 0;
}
