#include <iostream>
#include <string>
#include <set>
using namespace std;

bool isPangram(string s) {
    set<char> letters;
    for (char c : s) {
        if (isalpha(c)) letters.insert(tolower(c));
    }
    return letters.size() == 26;
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    if (isPangram(s)) cout << "The sentence is a Pangram.";
    else cout << "The sentence is not a Pangram.";
}
