#include <iostream>
using namespace std;

class Loan {
protected:
    string borrower;
    double amount;
public:
    Loan(string b, double a) : borrower(b), amount(a) {}
    virtual void display() {
        cout << "Borrower: " << borrower << " | Loan: Rs." << amount << endl;
    }
};

class HomeLoan : public Loan {
    int years;
public:
    HomeLoan(string b, double a, int y) : Loan(b,a), years(y) {}
    void display() override {
        cout << "Home Loan -> Borrower: " << borrower 
             << " | Amount: Rs." << amount 
             << " | Years: " << years << endl;
    }
};

int main() {
    Loan *l1 = new Loan("Alice", 50000);
    Loan *l2 = new HomeLoan("Bob", 200000, 10);

    l1->display();
    l2->display();
}
