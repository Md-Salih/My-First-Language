#include <iostream>
#include <vector>
using namespace std;

class Employee {
    string name;
    int id;
    double salary;
public:
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}
    void display() {
        cout << "ID: " << id << " | Name: " << name << " | Salary: " << salary << endl;
    }
};

int main() {
    vector<Employee> employees;
    employees.push_back(Employee("Alice", 101, 50000));
    employees.push_back(Employee("Bob", 102, 60000));

    cout << "Employee List:\n";
    for (auto &e : employees) e.display();
}
