#include <iostream>
#include <cmath>
using namespace std;

bool isAutomorphic(int n) {
    long long sq = (long long)n * n;
    string s1 = to_string(n);
    string s2 = to_string(sq);
    return s2.substr(s2.size() - s1.size()) == s1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isAutomorphic(num)) cout << num << " is an Automorphic number.";
    else cout << num << " is not an Automorphic number.";
}
