#include <iostream>
#include <cmath>
using namespace std;

bool isDisarium(int n) {
    int temp = n, digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int sum = 0, pos = digits;
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, pos--);
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isDisarium(num)) cout << num << " is a Disarium number.";
    else cout << num << " is not a Disarium number.";
}
