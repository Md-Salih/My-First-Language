

#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int age;
};

bool compare(Student a, Student b) {
    return a.age < b.age;
}

void sortStudents(Student arr[], int n) {
    sort(arr, arr + n, compare);
}

void printArray(Student arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i].name << " " << arr[i].age << endl;
}

int main() {
    Student arr[] = {{"John", 20}, {"Alice", 18}, {"Bob", 22}};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: " << endl;
    printArray(arr, n);
    sortStudents(arr, n);
    cout << "Sorted array: " << endl;
    printArray(arr, n);
    return 0;
}
