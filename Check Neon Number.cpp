#include <iostream>
using namespace std;

bool isNeon(int n) {
    int sq = n * n, sum = 0;
    while (sq > 0) {
        sum += sq % 10;
        sq /= 10;
    }
    return sum == n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isNeon(num)) cout << num << " is a Neon number.";
    else cout << num << " is not a Neon number.";
}
