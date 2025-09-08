#include <iostream>
using namespace std;

class Loan {
    string customer;
    double amount;
    double rate;
    int years;
public:
    Loan(string c, double a, double r, int y) : customer(c), amount(a), rate(r), years(y) {}
    double calculateEMI() {
        double monthlyRate = rate / (12 * 100);
        int months = years * 12;
        return (amount * monthlyRate) / (1 - pow(1 + monthlyRate, -months));
    }
    void display() {
        cout << "Customer: " << customer 
             << " | Loan Amount: " << amount 
             << " | EMI: " << calculateEMI() << endl;
    }
};

int main() {
    Loan l1("Alice", 100000, 7.5, 5);
    Loan l2("Bob", 50000, 8.0, 3);
    l1.display();
    l2.display();
}
