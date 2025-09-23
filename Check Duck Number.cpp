#include <iostream>
#include <string>
using namespace std;

bool isDuck(string num) {
    if (num[0] == '0') return false;
    for (char c : num) {
        if (c == '0') return true;
    }
    return false;
}

int main() {
    string num;
    cout << "Enter a number: ";
    cin >> num;

    if (isDuck(num)) cout << num << " is a Duck number.";
    else cout << num << " is not a Duck number.";
}
