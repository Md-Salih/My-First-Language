#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    ofstream fout("results.txt");
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    for(int i=0; i<n; i++) {
        Student s;
        cout << "Enter name and marks: ";
        cin >> s.name >> s.marks;
        fout << s.name << " " << s.marks << endl;
    }
    fout.close();

    cout << "\n---Results from File---\n";
    ifstream fin("results.txt");
    Student s;
    while(fin >> s.name >> s.marks) {
        cout << s.name << " : " << s.marks 
             << " -> " << (s.marks >= 50 ? "PASS" : "FAIL") << endl;
    }
    fin.close();
}
