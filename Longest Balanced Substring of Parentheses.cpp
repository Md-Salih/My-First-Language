#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<int> st;
    st.push(-1);
    int best = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(')
            st.push(i);
        else {
            st.pop();
            if(st.empty())
                st.push(i);
            else
                best = max(best, i - st.top());
        }
    }

    cout << best;
    return 0;
}
