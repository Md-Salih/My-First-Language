#include <iostream>
#include <cmath>
using namespace std;

bool isTech(int n) {
    string s = to_string(n);
    if (s.size() % 2 != 0) return false;
    int half = s.size()/2;
    int left = stoi(s.substr(0,half));
    int right = stoi(s.substr(half));
    int sum = left + right;
    return sum*sum == n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isTech(num)) cout << num << " is a Tech number.";
    else cout << num << " is not a Tech number.";
}
