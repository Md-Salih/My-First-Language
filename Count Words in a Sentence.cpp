#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string line, word;
    cout << "Enter a sentence: ";
    getline(cin, line);

    stringstream ss(line);
    int count = 0;
    while (ss >> word) count++;

    cout << "Total words = " << count;
}
