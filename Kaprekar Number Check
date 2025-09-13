#include <iostream>
#include <cmath>
using namespace std;

bool isKaprekar(int n) {
    long long sq = (long long)n * n;
    string s = to_string(sq);
    int len = s.length();

    for (int i = 1; i < len; i++) {
        int left = stoi(s.substr(0, i));
        int right = stoi(s.substr(i));
        if (right > 0 && left + right == n) return true;
    }
    return (n == 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isKaprekar(num)) cout << num << " is a Kaprekar number.";
    else cout << num << " is not a Kaprekar number.";
}
