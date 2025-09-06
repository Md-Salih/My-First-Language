#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence, word, longest;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    while (ss >> word) {
        if (word.length() > longest.length()) longest = word;
    }
    cout << "Longest word: " << longest << endl;
}
