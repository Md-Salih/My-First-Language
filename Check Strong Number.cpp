#include <iostream>
using namespace std;

int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int num, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp > 0) {
        int d = temp % 10;
        sum += factorial(d);
        temp /= 10;
    }

    if (sum == num) cout << num << " is a Strong number.";
    else cout << num << " is not a Strong number.";
}
