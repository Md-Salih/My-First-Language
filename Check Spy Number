#include <iostream>
using namespace std;

bool isSpy(int n) {
    int sum=0, prod=1, temp=n;
    while (temp>0) {
        int d = temp%10;
        sum += d;
        prod *= d;
        temp /= 10;
    }
    return sum == prod;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isSpy(num)) cout << num << " is a Spy number.";
    else cout << num << " is not a Spy number.";
}
