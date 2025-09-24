#include <iostream>
using namespace std;

int fact(int n) {
    int f=1;
    for (int i=1; i<=n; i++) f *= i;
    return f;
}

bool isPeterson(int n) {
    int sum=0, temp=n;
    while (temp>0) {
        sum += fact(temp%10);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPeterson(num)) cout << num << " is a Peterson number.";
    else cout << num << " is not a Peterson number.";
}
