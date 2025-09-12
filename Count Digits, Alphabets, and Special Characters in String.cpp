#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int digits=0, letters=0, special=0;
    for (char c : s) {
        if (isdigit(c)) digits++;
        else if (isalpha(c)) letters++;
        else if (!isspace(c)) special++;
    }

    cout << "Alphabets: " << letters 
         << ", Digits: " << digits 
         << ", Special characters: " << special;
}
