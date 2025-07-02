#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

void sortStrings(string arr[], int n) {
    map<string, int> freq;
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;
    vector<pair<string, int>> vec(freq.begin(), freq.end());
    sort(vec.begin(), vec.end(), compare);
    int index = 0;
    for (auto& pair : vec) {
        while (pair.second--) {
            arr[index++] = pair.first;
        }
    }
}

void printArray(string arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    string arr[] = {"apple", "banana", "apple", "orange", "banana", "banana"};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);
    sortStrings(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
