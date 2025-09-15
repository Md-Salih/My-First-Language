#include <iostream>
using namespace std;

bool isAbundant(int n) {
    int sum = 1; 
    for (int i=2; i<=n/2; i++) {
        if (n % i == 0) sum += i;
    }
    return sum > n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isAbundant(num)) cout << num << " is an Abundant number.";
    else cout << num << " is not an Abundant number.";
}
