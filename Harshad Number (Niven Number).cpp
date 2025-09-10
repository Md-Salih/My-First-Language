#include <iostream>
using namespace std;

bool isHarshad(int n) {
    int sum = 0, temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return (n % sum == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHarshad(num)) cout << num << " is a Harshad number.";
    else cout << num << " is not a Harshad number.";
}
