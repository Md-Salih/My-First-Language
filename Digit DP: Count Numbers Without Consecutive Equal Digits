#include <bits/stdc++.h>
using namespace std;

long long dp[20][11][2][2];
string num;

long long solveDP(int pos, int prev, bool tight, bool start){
    if(pos == num.size()) return 1;

    long long &res = dp[pos][prev+1][tight][start];
    if(res != -1) return res;
    res = 0;

    int limit = tight ? num[pos]-'0' : 9;

    for(int d=0; d<=limit; d++){
        bool newTight = tight && (d == limit);
        if(start && d == prev) continue;

        res += solveDP(pos+1, start?d:prev, newTight, start || d!=0);
    }
    return res;
}

long long countValid(long long x){
    if(x<0) return 0;
    num = to_string(x);
    memset(dp, -1, sizeof(dp));
    return solveDP(0, -1, 1, 0);
}

int main(){
    long long L = 10, R = 1000;
    cout << countValid(R) - countValid(L-1);
}
