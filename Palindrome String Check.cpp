#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string rev = string(s.rbegin(), s.rend());
    if (s == rev)
        cout << s << " is a palindrome.";
    else
        cout << s << " is not a palindrome.";
}
