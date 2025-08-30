#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int countVowels(string s) {
    int count = 0;
    for (char c : s)
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    return count;
}

bool compare(string a, string b) {
    return countVowels(a) < countVowels(b);
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
    return 0;
}
