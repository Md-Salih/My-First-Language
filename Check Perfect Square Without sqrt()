#include <iostream>
using namespace std;

bool isPerfectSquare(int n) {
    for (long long i = 1; i * i <= n; i++) {
        if (i * i == n) return true;
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPerfectSquare(num)) cout << num << " is a perfect square.";
    else cout << num << " is not a perfect square.";
}
