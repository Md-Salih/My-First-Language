#include <iostream>
using namespace std;

bool isEvil(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) count++;
        n >>= 1;
    }
    return count % 2 == 0;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isEvil(num)) cout << num << " is an Evil number.";
    else cout << num << " is not an Evil number.";
}
