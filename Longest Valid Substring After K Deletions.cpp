#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int K;
    cin >> s >> K;

    int n = s.size();
    int ans = 1, cnt = 0;
    int l = 0;

    for(int r = 1; r < n; r++){
        if(s[r] == s[r-1]) cnt++;

        while(cnt > K){
            if(s[l] == s[l+1]) cnt--;
            l++;
        }
        ans = max(ans, r - l + 1 - cnt);
    }

    cout << ans;
    return 0;
}
