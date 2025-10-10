#include <iostream>
#include <fstream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    ifstream fin("sample.txt");
    if (!fin) {
        cout << "File not found!" << endl;
        return 1;
    }

    unordered_set<string> uniqueWords;
    string word;
    while (fin >> word)
        uniqueWords.insert(word);

    cout << "Total unique words: " << uniqueWords.size() << endl;
    fin.close();
}
