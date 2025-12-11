#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(const string& s) {
    int result = 0;

    for (char c : s) {
        result = result * 2 + (c - '0');
    }

    return result;
}

int main() {
    string s = "1101";
    cout << binaryToDecimal(s);
    return 0;
}
