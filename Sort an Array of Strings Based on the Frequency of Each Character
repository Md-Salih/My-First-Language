#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int countChars(string s) {
    map<char, int> freq;
    for (char c : s)
        freq[c]++;
    return freq.size();
}

bool compare(string a, string b) {
    return countChars(a) < countChars(b);
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
    string arr[] = {"apple", "banana", "cat", "dog"};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    sortStrings(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
