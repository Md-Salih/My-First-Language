#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int longestPalindromicSubstring(string s) {
    int n = s.length();
    bool table[n][n];
    int maxLength = 1;
    for (int i = 0; i < n; i++)
        table[i][i] = true;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            table[i][i + 1] = true;
            maxLength = 2;
        }
    }
    for (int k = 3; k <= n; k++) {
        for (int i = 0; i < n - k + 1; i++) {
            int j = i + k - 1;
            if (table[i + 1][j - 1] && s[i] == s[j]) {
                table[i][j] = true;
                if (k > maxLength)
                    maxLength = k;
            }
        }
    }
    return maxLength;
}

bool compare(string a, string b) {
    return longestPalindromicSubstring(a) < longestPalindromicSubstring(b);
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
    string arr[] = {"babad", "cbbd", "a"};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    sortStrings(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
