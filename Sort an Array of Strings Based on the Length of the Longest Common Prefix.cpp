#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int commonPrefix(string s1, string s2) {
    int i = 0;
    while (i < s1.length() && i < s2.length() && s1[i] == s2[i])
        i++;
    return i;
}

bool compare(string a, string b, string first) {
    return commonPrefix(a, first) > commonPrefix(b, first);
}

void sortStrings(string arr[], int n) {
    string first = arr[0];
    sort(arr + 1, arr + n, [first](string a, string b) {
        return commonPrefix(a, first) > commonPrefix(b, first);
    });
}

void printArray(string arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    string arr[] = {"flower", "flow", "flight", "flute"};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    sortStrings(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
