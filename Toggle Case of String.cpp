#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    for (char &c : s) {
        if (islower(c)) c = toupper(c);
        else if (isupper(c)) c = tolower(c);
    }

    cout << "Toggled string: " << s;
}
