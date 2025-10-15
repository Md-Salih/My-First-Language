#include <iostream>
#include <string>
using namespace std;

void subsets(string s, string cur="", int i=0) {
    if (i == s.size()) {
        cout << cur << endl;
        return;
    }
    subsets(s, cur + s[i], i+1);
    subsets(s, cur, i+1);
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "All subsets:\n";
    subsets(s);
}
