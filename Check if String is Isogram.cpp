#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool isIsogram(string s) {
    unordered_set<char> seen;
    for (char c : s) {
        c = tolower(c);
        if (isalpha(c)) {
            if (seen.count(c)) return false;
            seen.insert(c);
        }
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;

    if (isIsogram(s)) cout << s << " is an Isogram.";
    else cout << s << " is not an Isogram.";
}
