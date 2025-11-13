#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Employee {
protected:
    string name;
    double basic;
public:
    Employee(string n,double b):name(n),basic(b){}
    virtual double calcSalary()=0;
    virtual void display(){
        cout<<name<<" | Salary: Rs."<<calcSalary()<<endl;
    }
};

class Manager : public Employee {
    double bonus;
public:
    Manager(string n,double b,double bo):Employee(n,b),bonus(bo){}
    double calcSalary(){ return basic + bonus; }
};

class Staff : public Employee {
    double allowance;
public:
    Staff(string n,double b,double a):Employee(n,b),allowance(a){}
    double calcSalary(){ return basic + allowance; }
};

int main(){
    vector<Employee*> emp;
    emp.push_back(new Manager("Arun",30000,5000));
    emp.push_back(new Staff("Bala",20000,2000));
    emp.push_back(new Manager("Charan",40000,7000));

    ofstream fout("payroll_day52.txt");
    cout<<"--- Employee Payroll ---\n";
    for(auto e:emp){
        e->display();
        fout<<e->calcSalary()<<endl;
    }
    fout.close();
}
