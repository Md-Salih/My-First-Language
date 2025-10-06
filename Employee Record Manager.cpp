#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Employee {
public:
    string name;
    int id;
    double salary;

    void input() {
        cout << "Enter name, ID, and salary: ";
        cin >> name >> id >> salary;
    }

    void display() {
        cout << "Name: " << name << " | ID: " << id << " | Salary: " << salary << endl;
    }
};

int main() {
    ofstream fout("employees.txt", ios::app);
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    vector<Employee> list(n);
    for (int i=0; i<n; i++) {
        list[i].input();
        fout << list[i].name << " " << list[i].id << " " << list[i].salary << endl;
    }
    fout.close();

    cout << "\nReading data from file:\n";
    ifstream fin("employees.txt");
    Employee e;
    while (fin >> e.name >> e.id >> e.salary)
        e.display();
    fin.close();
}
