#include <iostream>
#include <vector>
using namespace std;

class Employee {
protected:
    string name;
public:
    Employee(string n) : name(n) {}
    virtual void calculatePay() = 0;
};

class FullTime : public Employee {
    double salary;
public:
    FullTime(string n, double s) : Employee(n), salary(s) {}
    void calculatePay() override {
        cout << name << " (Full-time) Pay: " << salary << endl;
    }
};

class PartTime : public Employee {
    int hours;
    double rate;
public:
    PartTime(string n, int h, double r) : Employee(n), hours(h), rate(r) {}
    void calculatePay() override {
        cout << name << " (Part-time) Pay: " << hours * rate << endl;
    }
};

int main() {
    vector<Employee*> staff;
    staff.push_back(new FullTime("Alice", 5000));
    staff.push_back(new PartTime("Bob", 40, 100));

    for (auto e : staff) e->calculatePay();
}
