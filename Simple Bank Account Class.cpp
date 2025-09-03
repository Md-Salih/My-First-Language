#include <iostream>
using namespace std;

class BankAccount {
    string name;
    double balance;
public:
    BankAccount(string n, double b) {
        name = n;
        balance = b;
    }
    void deposit(double amt) { balance += amt; }
    void withdraw(double amt) { 
        if (amt <= balance) balance -= amt;
        else cout << "Insufficient balance\n";
    }
    void display() {
        cout << "Account Holder: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Mohamed", 1000);
    acc.display();
    acc.deposit(500);
    acc.withdraw(200);
    acc.display();
}
