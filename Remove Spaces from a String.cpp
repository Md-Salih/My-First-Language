#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    string result = "";
    for (char c : s) {
        if (c != ' ') result += c;
    }

    cout << "String without spaces: " << result;
}
