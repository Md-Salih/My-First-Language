#include <iostream>
using namespace std;

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

bool isSmith(int n) {
    if (isPrime(n)) return false; 
    int sum1 = sumDigits(n), sum2 = 0, temp = n;
    for (int i=2; i<=temp; i++) {
        while (temp % i == 0) {
            sum2 += sumDigits(i);
            temp /= i;
        }
    }
    return sum1 == sum2;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isSmith(num)) cout << num << " is a Smith number.";
    else cout << num << " is not a Smith number.";
}
