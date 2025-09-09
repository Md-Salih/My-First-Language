#include <iostream>
using namespace std;

bool isAutomorphic(int n) {
    int sq = n * n;
    while (n > 0) {
        if (n % 10 != sq % 10) return false;
        n /= 10;
        sq /= 10;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isAutomorphic(num)) cout << num << " is Automorphic.";
    else cout << num << " is not Automorphic.";
}
