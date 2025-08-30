#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int shortestWordLength(string s) {
    stringstream ss(s);
    string word;
    int minLen = INT_MAX;
    while (ss >> word)
        minLen = min(minLen, (int)word.length());
    return minLen;
}

bool compare(string a, string b) {
    return shortestWordLength(a) < shortestWordLength(b);
}

void sortStrings(string arr[], int n) {
    sort(arr, arr + n, compare);
}

void printArray(string arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    string arr[] = {"hello world", "a b c", "this is a test"};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    sortStrings(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
